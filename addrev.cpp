#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,reva=0,revb=0;
		cin>>a>>b;
		while(a)
		{
			int dig=a%10;
			reva=(reva*10)+dig;
			a=a/10;
		}
		while(b)
		{
			int dig=b%10;
			revb=(revb*10)+dig;
			b=b/10;
		}
		c=reva+revb;
		ll revc=0;
		while(c)
		{
			int dig=c%10;
			revc=(revc*10)+dig;
			c=c/10;
		}
		cout<<revc<<endl;
	}
}

