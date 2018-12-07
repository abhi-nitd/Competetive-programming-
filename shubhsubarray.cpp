#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll arr[n];
		ll k;
		cin>>n>>k;
		ll i;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll prod=1,count=0,j;
		
		for(i=0;i<n;i++)
		{
			prod=1;
			
			for(j=i;j<n;j++)
			{
				prod=prod*arr[j];
				if(prod==k)
				{
					count++;
					break;
				}
				else if(prod>k)
				{
					break;
				}
			}
		}
		cout<<count<<endl;
	}
}

