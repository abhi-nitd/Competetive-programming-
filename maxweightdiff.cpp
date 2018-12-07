#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll i, arr[n],suml=0,summ=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if(k<=(n/2))
		{
			for(i=0;i<n;i++)
			{
				if(i<k)
				{
					suml+=arr[i];
				}
				else
				{
					summ+=arr[i];
				}
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(i<(n-k))
				{
					suml+=arr[i];
				}
				else
				{
					summ+=arr[i];
				}
			}
		}
		cout<<summ-suml<<endl;
	}
}
