#include<bits/stdc++.h>
using namespace std;
#define ll long long
map <ll,ll> mp;
ll func(ll x)
{
	if(x==0)
		return 0;
	if(mp[x]!=0)
		return mp[x];
	ll k=func(x/2)+func(x/3)+func(x/4);
	if(k>x)
		mp[x]=k;
	else
		mp[x]=x;
	return mp[x];
	
}
int main()
{
	ll a;
	while(cin>>a)
	{
		cout<<func(a)<<endl;
	}
}
