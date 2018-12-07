#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,k;
		cin>>a>>b>>k;
		a=a+b;
		a=a/k;
		if(a%2==0)
		{
			cout<<"CHEF"<<endl;
		}
		else
		{
			cout<<"COOK"<<endl;
		}
	}
}
