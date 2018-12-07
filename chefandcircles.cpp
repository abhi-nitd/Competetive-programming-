#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000001
int c[m]={0};
struct circle
{
	int x;
	int y;
	int r;
};
int main()
{
	int n,q;
	cin>>n>>q;
	circle arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i].x>>arr[i].y>>arr[i].r;
	}
	double max=0,min=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>i)
			{
				double k=ceil(sqrt(pow(arr[i].x-arr[j].x,2)+pow(arr[i].y-arr[j].y,2)));
				max=k+arr[i].r+arr[j].r;
				if((k-arr[i].r-arr[j].r)<0)
				{
					min=0;
				}
				else
				{
					min=k-arr[i].r-arr[j].r;
				}
				int l=ceil(min);
				int r=ceil(max);
				c[r]-=1;
				c[l]+=1;
			}
		}
	}
	for(i=1;i<m;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	while(q--)
	{
		int l;
		cin>>l;
		cout<<c[l]<<endl;
	}
}
