#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
//ll power(ll x, ll y, ll p) 
//{ 
//    ll res = 1;
//  	x = x % p; 
//  	while (y > 0) 
//    {
//        if (y & 1) 
//            res = ((res%mod)*(x%mod)) % p; 
//        y = y>>1;
//        x = ((x%p)*(x%p)) % p; 
//    } 
//    return res%p; 
//}  
//ll Inverse(ll n, ll p) 
//{ 
//    return power(n, p-2, p); 
//}  
//ll nCr(ll n, ll r, ll p) 
//{ 
//   
//   	if (r==0) 
//      return 1; 
//    ll fact[n+1]; 
//    fact[0] = 1; 
//    for (ll i=1 ; i<=n; i++) 
//        fact[i] = fact[i-1]*i%p; 
//  	return (fact[n]*Inverse(fact[r], p) % p * Inverse(fact[n-r], p) % p) % p; 
//} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll low,up;
		low=(k+1<n-k)?k+1:n-k;
		up=n-low;
		ll nu[low],de[low],fact[10001]={0};
		
		ll i,j;
		for(i=0;i<low;i++)
		{
			nu[i]=n+1-i;
			de[i]=low-i;
		}
		for(i=2;i<=low;i++)
		{
			for(j=0;j<low;j++)
			{
				while(de[j]%i==0)
				{
					fact[i]++;
					de[j]=de[j]/i;
				}
			}
		}
		i=0;
		for(i=2;i<low+1;i++)
		{
			if(fact[i]>0)
			{
				for(j=0;j<low;j++)
				{
					while(fact[i]>0 && nu[j]%i==0)
					{
						nu[j]=nu[j]/i;
						fact[i]--;
					}
					if(fact[i]==0)
						break;
				
				}
	
			}
		}
		ll ans=1;
		for(i=0;i<low;i++)
		{
			ans=((ans%mod)*(nu[i]%mod))%mod;
			ans=ans%mod;
		}
		cout<<(2*ans)%mod<<endl;
//		for(i=0;i<low;i++)
//		{
//			cout<<fact[i]<<" ";
//		}
//		cout<<endl;
//		for(i=0;i<low;i++)
//		{
//			cout<<nu[i]<<" ";
//		}
//		cout<<endl;
//		for(i=0;i<low;i++)
//		{
//			cout<<de[i]<<" ";
//		}
	}
}
