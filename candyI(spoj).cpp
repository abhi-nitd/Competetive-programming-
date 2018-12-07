#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	while(1)
	{
		ll n;
		cin>>n;
		if(n==-1)
			break;
		ll arr[n];
		ll i,sum=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum%n==0)
		{
			ll l=sum/n;
			ll x=0;
			for(i=0;i<n;i++)
			{
				if(arr[i]<l)
				{
					x+=(l-arr[i]);
				}
			}
			cout<<x<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
