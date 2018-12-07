#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,n;
		cin>>n;
		if(n%2==0)
		{
			k=n/2;
		}
		else
		{
		
		k=(n/2)+1;
		k=n-k;
		}
		ll i;
		cout<<"1 1";
		for(i=0;i<k;i++)
		{
			cout<<"0";
		}
		cout<<endl;
	}
}
