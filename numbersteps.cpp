#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		if(x-y==2 || x==y)
		{
			if(x%2==0)
			{
				cout<<x+y<<endl;
			}
			else
			{
				cout<<x+y-1;
			}
		}
		else
		{
			cout<<"No Number"<<endl;
		}
	}
}
