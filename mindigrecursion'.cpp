#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll s(ll m)
{
	ll sum=0;
	while(m)
	{
		sum+=m%10;
		m=m/10;
	}
	return sum;
}
void mindig(ll x,ll dis)
{
	mindig(x+dis,dis);
	x=s(x);
	mindig(x,dis);
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		if(n==1)
		{
			cout<<"1 0"<<endl;
		}
		else
		{
			mindig(n,d);
		}
	}

}
