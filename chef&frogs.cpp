#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k,p;
	cin>>n>>k>>p;
	ll arr[n];
	ll i,max=-1;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	ll dp[max+1];
	for(i=0;i<=max;i++)
	{
		dp[i]=0;
	}
	for(i=0;i<n;i++)
	{
		dp[arr[i]]=-1;
	}
	ll flag=max,mark=0;
	for(i=max;i>=0;i--)
	{
		if(dp[i]==-1 && mark<=k)
		{
			dp[i]=flag;
			mark=0;
		}
		else if(dp[i]==-1 && mark>k)
		{
			flag=i;
			dp[i]=flag;
			mark=0;
		}
		mark++;
	}
	while(p--)
	{
		ll start,end;
		cin>>start>>end;
//		if(start>end)
//		{
//			swap(start,end);
//		}
		if(dp[arr[start-1]]==dp[arr[end-1]])
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
//	for(i=0;i<=max;i++)
//	{
//		cout<<dp[i]<<" ";
//	}
}
