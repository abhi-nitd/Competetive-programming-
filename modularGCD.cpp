#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1;
	x = x % p;
 	while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;       
        y = y>>1;
        x = (x*x) % p;  
    }
    return res%p;
}
ll gcd(ll a, ll b)
{
	
    if (!a)
       return b;
//    if(!b)
//    	return a%m;
    return gcd(b,a%b);
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,n;
		cin>>a>>b>>n;
		if(a==b)
		{
			cout<<(2*power(a,n,m)%m)%m<<endl;
		}
		else
		{
		
			ll var=((a%m)-(b%m))%m;
			cout<<gcd(((power(a,n,var))%var+(power(b,n,var))%var)%var,var)%m<<endl;
		}
	}
}
