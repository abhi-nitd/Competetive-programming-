#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k;
	cin>>n>>k;
	map <ll,ll> mp;
	map <ll,ll> :: reverse_iterator it;
	ll i;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		mp[a]++;
	}
	int high=n,low=1,mid;
	while(low<high)
	{
		mid=(high+low+1)/2;
		ll count=0;
		for(it=mp.rbegin();it!=mp.rend();it++)
		{
			count+=(it->second)/mid;
		}
		if(count<k)
		{
			high=mid-1;
		}
		else
		{
			low=mid;
		}
	}
	vector <ll> vec;
	vector <ll> :: iterator itr;
	ll c=0;
	for(it=mp.rbegin();it!=mp.rend() && c!=k;it++)
	{
		int var=(it->second)/low;
		
		for(i=0;i<var;i++)
		{
			if(c<k)
			{
				vec.push_back(it->first);
				c++;
			}
			else
				break;
			
		}
	}
	for(itr=vec.begin();itr!=vec.end();itr++)
	{
		cout<<*itr<<" ";
	}
}
