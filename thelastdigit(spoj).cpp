#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll num=a,ans=1;
		while(b)
		{
			if(b&1==1)
			{
				ans=ans*num;
				ans=ans%10;
			}
			num=num*num;
			num=num%10;
			b=b>>1;
		}
		cout<<ans<<endl;
	}
}
