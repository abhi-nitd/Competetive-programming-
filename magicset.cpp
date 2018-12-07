#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll x, ll y)
{
    ll res = 1;    
  
    while (y > 0)
    {
    
        if (y & 1)
            res = res*x;
  
        y = y>>1;
        x = x*x;  
    }
    return res;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	
		ll n,m;
		cin>>n>>m;
		ll arr[n];
		ll i;
		for(i=0;i<n;i++)
		{
			
			cin>>arr[i];
		}
		ll count=0,sum=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]%m==0)
			{
				count++;
			}
//			else
//			{
//				ll k=(power(2,count)-1);
//				sum+=k;
//				count=0;
//			}
		}
		ll k=(power(2,count)-1);
		sum+=k;
		count=0;
		cout<<sum<<endl;
	}
}
