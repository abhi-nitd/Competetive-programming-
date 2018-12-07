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
		cout<<endl;
		cin>>n;
		ll i;
		ll sum=0;
		for(i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			sum+=a;
			sum=sum%n;
		}
		if(sum==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
}
