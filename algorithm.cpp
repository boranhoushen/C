
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define int long long

using namespace std;

int Factorial(int n){//递归求解 n 阶乘.
    if(n==1) return 1;
    else return n*Factorial(n-1);
}

int gcd(int a,int b){//递归求解 gcd(a,b) .
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

void Hanuota(int n,char a,char b,char c) {//递归 汉诺塔问题 输出过程.
	if(n==0) return ;
	Hanuota(n-1,a,c,b);
	cout<<a<<"->"<<c<<'\n';
	Hanuota(n-1,b,a,c);
}

int Fibonacci(int n){//递归求Fibonacci数列的第 n 项.
	if(n<=2) return 1;
	else return Fibonacci(n-1)+Fibonacci(n-2);
}

const int N=1e5+10;
int a[N];
int Fibonacci(int n){//记忆化递归求Fibonacci数列的第 n 项.
	if(n<=2) {
		a[n]=1;
		return a[n];
	}
	else if(a[n]){
		return a[n];
	}
	else if(!a[n]){
		a[n]=Fibonacci(n-1)+Fibonacci(n-2);
		return a[n];
	}
}
//二分查找
int erfen(int n){

    int l=1,r=n;
    while(l<=r){

        int mid=(l+r)/2;
        if(a[mid]>k) r=mid-1;
        else if(a[mid]<k) l=mid+1;
        else return mid;

    }
    return false;
}

//最大化答案
inline int erfen1(){
    while(l<r){//在递增序列中查找 <=x 的数最大的一个
	int mid=(l+r+1)>>1;
	if(a[mid]<=x) l=mid;
	else r=mid-1;
    }
    return a[l];
}

//最小化答案
inline int erfen2(){
    while(l<r){//在递增序列中查找 >=x 的数最大的一个 
	    int mid=(l+r+1)>>1;
	    if(a[mid]>=x) l=mid;
	    else r=mid-1;
    }
    return a[l];
}

inline void oula(){//欧拉筛求素数
	
	for(int i=2;i<=n;i++){
		if(!f[i]){
			p[++ans]=i;
		}
		//删除已有指数的 i 倍
		for(int j=1;j<=ans&&i*p[j]<=n;j++){
		//遍历 p 数组	
			f[i*p[j]]=1;//将第 j 个质数的 i 倍删除掉
			if(i%p[j]==0) break;
		
		} 
	}
	
	for(int i=1;i<=ans;i++) cout<<p[i]<<" ";
	
}
//f[1]=1;
