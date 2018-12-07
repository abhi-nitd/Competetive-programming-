#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k;
	cin>>n>>k;
	ll i;
	map <ll , ll> mp;
	vector <int> v;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		mp[a]++;
	}
	vector <pair<int,int> > vec;
	map <ll,ll> ::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++)
	{
		vec.push_back(make_pair(itr->first,itr->second));
	}
	ll size=int(vec.size());
	ll low=0,high=n+1,c;
	while(low<high)
	{
		ll mid=(low+high)/2;
		c=0;
		for( i=0;i<vec.size();i++)
        {
            c=c+(vec[i].second)/mid;
        }
        if(c>=k)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
		
	}
	c=0;i=0;
    while(i<vec.size()&&c<k)
    {
        ll num=vec[i].second/low;
        if(c+num>k)
        {
            ll num1=k-c;
            for(ll j=0;j<num1;j++)
            {
                v.push_back(vec[i].first);
            }
            c=k;
        }
        else
        {
            for(ll j=0;j<num;j++)
            {
                v.push_back(vec[i].first);
            }
            c=c+num;
        }
        i++;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
 
	
}
