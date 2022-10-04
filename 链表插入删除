#include <iostream>
/*	样例输入
	5
	5 4 2 3 1
	2
	3 7
	2 8
	输出
	5 4 8 2 7 3 1
*/
using namespace std;

const int N=1e6+10;
int head=-1;
int tot=0;

int a[N];
int b[N];

void addhead(int y){//头插入
	tot++;
	a[tot]=y;
	b[tot]=b[head];
	head=tot;
}

void insert(int x,int y){//尾插入
	tot++;
	a[tot]=y;
	
	b[tot]=b[x];
	b[x]=tot;
}

void erase(int x){//删除
	b[x]=b[b[x]];
}

signed main(){
	
	int n;
	cin>>n;
	/*
	for(int i=1;i<=n;i++){
		tot++;
		b[tot]=-1;
		cin>>a[tot];
		b[tot-1]=tot;
	}
	*/
	b[tot]=-1;
	for(int i=1;i<=n;i++){
		int y;
		cin>>y;
		insert(tot,y);
	}
	
	if(n!=0) head=1;
	
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		insert(x,y);
	}//插入
	
	for(int i=head;~i;i=b[i]){
		cout<<a[i]<<" ";
	}//输出
	return 0;
} 
