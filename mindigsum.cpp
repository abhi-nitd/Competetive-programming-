#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(ll x)
{
	ll sum=0;
	while(x)
	{
		sum+=x%10;
		x=x/10;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		ll mina,minb,min=10;
		mina=(n%9==0)?9:n%9;
		minb=(d%9==0)?9:d%9;
		ll ans=mina;
		if(min>mina)
		{
			min=mina;
		}
		while(mina!=1)
		{
			mina=mina+minb;
			mina=(mina%9==0)?9:mina%9;
			if(mina<min)
				min=mina;
			if(mina==ans)
				break;
		}
//		cout<<min<<endl;
		map <ll,ll> mp1,mp2;
		ans=n;
		map <ll,ll> :: iterator it,ip;
		mp2.insert(make_pair(ans,0));
		while(1)
		{
			ip=mp2.begin();
			if(ip->first==min)
			{
				break;
			}
			mp1=mp2;
			mp2.clear();
			for(it=mp1.begin();it!=mp1.end();it++)
			{
				mp2.insert(make_pair((it->first)+d,(it->second)+1));
				mp2.insert(make_pair(sum(it->first),(it->second)+1));
				ip=mp2.begin();
				if(ip->first==min)
				{
					break;
				}
			}
		}
		cout<<ip->first<<" "<<ip->second<<endl;
	}
}
