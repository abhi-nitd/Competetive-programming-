#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll i;
		vector <pair<int,int> > v;
		for(i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(),v.end() );
		vector <pair<int,int> > :: iterator itr;
		while(m--)
		{
			pair <int,int> q;
			int k;
//			
			cin>>k;
			q.first=k;
			q.second=0;
			itr=lower_bound(v.begin(),v.end(),q);
			int mid=itr-v.begin();
			if(mid>=n)
			{
				cout<<"-1"<<endl;
			}
			else if(mid==0)
			{
				if(q.first==v[mid].first)
				{
					cout<<"0"<<endl;
				}
				else
				{
					cout<<v[mid].first-q.first<<endl;
				}
			}
			else if(q.first==v[mid].first)
			{
				cout<<"0"<<endl;
			}
			
			else if(q.first>=v[mid-1].first && q.first<v[mid-1].second)
			{
				cout<<"0"<<endl;
			}
//			else if(q.first<v[mid-1].first)
//			{
//				cout<<v[mid-1].first-q.first<<endl;
//			}
			else if(q.first<v[mid].first)
			{
				cout<<v[mid].first-q.first<<endl;
			}
			
		}
		
	}
}
