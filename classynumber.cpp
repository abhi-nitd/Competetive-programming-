#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000005
int main()
{
	int nonz=0,t;
	cin>>t;
	vector <ll> v;
	ll i;
	v.push_back(1);
	for(i=1;i<max;i++)
	{
		ll num=i;
		 nonz=0;
		while(num>0)
		{
			int dig=num%10;
			if(dig!=0)
			{
				nonz++;
			}
			num=num/10;
		}
		if(nonz<4)
		{
			v.push_back(v[i-1]+1);
		}
		else
			v.push_back(v[i-1]);
	}
//	for(i=0;i<t;i++)
//	{
//	
//		cout<<v[i]<<" ";
//	}
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		cout<<v[b]-v[a]<<endl;
	}
}
