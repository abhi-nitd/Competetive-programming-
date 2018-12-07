#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	ll fact[101];
	fact[0]=1;
	fact[1]=1;
	ll i;
	for(i=2;i<=100;i++)
	{
		fact[i]=fact[i-1]*i;
	}
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<fact[n]<<endl;
	}
}
