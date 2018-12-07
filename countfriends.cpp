#include<bits/stdc++.h>
using namespace std;
int parent[100001],size[100001];
int find(int x)
{
	if(parent[x]!=x)
	{
		parent[x]=find(parent[x]);
	}
	return parent[x];
}
void enter(int x,int y)
{
	int xroot=find(x);
	int yroot=find(y);
	if(xroot==yroot)
	{
		return;
	}
	if(size[xroot]>=size[yroot])
	{
		parent[yroot]=xroot;
		size[xroot]+=size[yroot];
		
	}
	else
	{
		parent[xroot]=yroot;
		size[yroot]+=size[xroot];
	}
}
int main()
{
	int i,n,m;
	cin>>n>>m;
	for(i=1;i<n+1;i++)
	{
		parent[i]=i;
		size[i]=1;
		
	}
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		enter(a,b);
	}
	for(i=1;i<n+1;i++)
	{
		int root=find(i);
		cout<<size[root]-1<<" ";
	}
}
