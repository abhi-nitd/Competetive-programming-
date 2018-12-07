#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pres[1000002]={0};
int main()
{
	ll n;
	cin>>n;
	ll i;
	vector <int> vec;
	ll arr[n],sum=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		pres[arr[i]]++;
		sum+=arr[i];
	}
	for(i=0;i<n;i++)
	{
		ll ns=sum-arr[i];
		pres[arr[i]]--;
		if(ns%2==0)
		{
			ll d=ns/2;
			if(d<=1000000 && pres[d]>0)
			{
				vec.push_back(i+1);
			}
		}
		pres[arr[i]]++;
	}
	vector <int> :: iterator itr;
	cout<<vec.size()<<endl;
	for(itr=vec.begin();itr!=vec.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
}
