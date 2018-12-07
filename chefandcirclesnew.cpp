#include<bits/stdc++.h>
using namespace std;
#define m 1000001
#define ll long long
ll c[m]={0};
struct circle
{
	ll x;
	ll y;
	ll r;
};
int main()
{
	ll n,q;
	cin>>n>>q;
	circle arr[n];
	ll i,j;
	for(i=0;i<n;i++)
	{
		cin>>arr[i].x>>arr[i].y>>arr[i].r;
	}
	double max,min,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<i)
			{
				k=sqrt((pow(arr[i].x-arr[j].x,2)+pow(arr[i].y-arr[j].y,2)));
				max=k+arr[i].r+arr[j].r;
				max=floor(max)+1;
				if(k>=arr[i].r+arr[j].r)
				{
					min=k-arr[i].r-arr[j].r;
				}
				else if(k<arr[i].r+arr[j].r && k>abs(arr[i].r-arr[j].r))
				{
					min=0;
				}
				else if(k<=abs(arr[i].r-arr[j].r))
				{
					min=abs(arr[i].r-arr[j].r)-k;
				}
				min=ceil(min);
				ll l,r;
				l=min;
				r=max;
				c[l]+=1;
				c[r]-=1;
//				cout<<l<<r<<endl;
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
