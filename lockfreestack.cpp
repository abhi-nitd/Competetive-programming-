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
		vector <int> vec[n];
		stack <int> st[n];
		ll i,j;
		ll size[n];
		for(i=0;i<n;i++)
		{
			
			cin>>size[i];
			for(j=0;j<size[i];j++)
			{
				ll k;
				cin>>k;
				vec[i].push_back(k);
			}
			for(j=size[i]-1;j>=0;j--)
			{
				st[i].push(vec[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			while(!st[i].empty())
			{
				cout<<st[i].top();
				st[i].pop();
			}
			cout<<endl;
		}
		
	}
}
