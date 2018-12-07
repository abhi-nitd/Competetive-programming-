#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n],dp[n]={0};
		ll i,j;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		dp[n-1]=1;
		int flag=0;
		for(i=n-2;i>=0;i--)
		{
			flag=1;
			
			
			if(arr[i]*arr[i+1]<0)
			{
				dp[i]=1+dp[i+1];
				flag=0;
				//break;
			}
			
			if(flag==1)
			{
				dp[i]=1;
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<dp[i]<<" ";
		}
		cout<<endl;
	}
}
