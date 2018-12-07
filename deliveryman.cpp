#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
int main()
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll a[n],b[n];
	ll i,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	multimap <ll,ll> m;
	for(i=0;i<n;i++)
	{
		m.insert(pair <ll,ll> (abs(a[i]-b[i]),i));
	}
	multimap <ll,ll> :: reverse_iterator rt;
//	rt=m.rbegin();
//	for(rt=m.rbegin();rt!=m.rend();rt++)
//	{
//		cout<<rt->f<<"\t"<<rt->s<<endl;
//		
//	}
	rt=m.rbegin();
	while(rt!=m.rend() && x>0 && y>0)
	{
		if(a[rt->s]-b[rt->s]>=0)
		{
			sum+=a[rt->s];
			x--;
		}
		else if(b[rt->s]-a[rt->s]>=0)
		{
			sum+=b[rt->s];
			y--;
		}
		rt++;
	}
	while(rt!=m.rend() && x>0)
	{
		sum+=a[rt->s];
		rt++;
		x--;
	}
	while(rt!=m.rend() && y>0)
	{
		sum+=b[rt->s];
		rt++;
		y--;
	}
	cout<<sum;
}
