#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		vector <ll> pos,neg;
		ll n,k,i,j,cp=0,cn=0;
		cin>>n>>k;
		ll q=n;
		while(q--)
		{
			ll var;
			cin>>var;
			if(var>=0)
			{
				pos.push_back(var);
				cp++;
			}
			else
			{
				neg.push_back(-1*var);
				cn++;
			}
		}
		sort(pos.begin(),pos.end());
		sort(neg.begin(),neg.end());
		i=0;
		j=0;
		ll ans=1;
		while(k)
		{
			ll prod1=0,prod2=0;
			if(k>1)
			{
				if(cp-i>1)
				{
					prod1=pos[i]*pos[i+1];
				}
				if(cn-j>1)
				{
					prod2=neg[j]*neg[j+1];
				}
				if(prod1>prod2)
				{
					ans=((ans%mod)*(prod1%mod))%mod;
					i+=2;
				}
				else
				{
					ans=((ans%mod)*(prod2%mod))%mod;
					j+=2;
				}
				k=k-2;
			}
			else
			{
				if(cp!=i)
				{
					ans=((ans)%mod*(pos[i])%mod)%mod;
				}
				else
				{
					ans=((ans)%mod*(neg[cn-1])%mod)%mod;
				}
				k--;
			}
			
		}
		ans%=mod;
		cout<<ans<<endl;
	}
}
