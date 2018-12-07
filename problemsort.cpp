#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll p,s;
	cin>>p>>s;
	multimap <ll,ll> prob[p],ans;
	multimap <ll,ll> :: iterator itr,next;
	ll i,j;
	ll arr1[p],arr2[s];
	for(j=0;j<p;j++)
	{
	
		for(i=0;i<s;i++)
		{
			cin>>arr1[i];
		}
		for(i=0;i<s;i++)
		{
			cin>>arr2[i];
		}
		for(i=0;i<s;i++)
		{
			prob[j].insert(make_pair (arr1[i],arr2[i]));
		}
	}
	ll n=0;
	for(i=0;i<p;i++)
	{
		next=prob[i].begin();
		next++;
		n=0;
		for(itr=prob[i].begin();itr!=prob[i].end() && next!=prob[i].end();itr++)
		{
			if((next->second)<(itr->second))
			{
				n++;
			}
			next++;
		}
		ans.insert(make_pair (n,i+1));
	}
	for(itr=ans.begin();itr!=ans.end();itr++)
	{
		cout<<itr->second<<endl;
	}
	
}
