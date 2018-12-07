#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll m[n],w[n];
		ll i,sum=0;
		for(i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>w[i];
		}
		sort(m,m+n);
		sort(w,w+n);
		for(i=0;i<n;i++)
		{
			sum+=w[i]*m[i];
		}
		cout<<sum<<endl;
	}
}
