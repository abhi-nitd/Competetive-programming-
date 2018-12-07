#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,count=0;
		cin>>n;
		for(i=5;(n/i)>0;i=i*5)
		{
			count+=n/i;
		}
		cout<<count<<endl;
	}
}
