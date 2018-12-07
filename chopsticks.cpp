#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,d;
	cin>>n>>d;
	ll arr[n];
	ll i,count=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	i=0;
	while(i<n)
	{
		if(arr[i+1]-arr[i]<=d)
		{
			count++;
			i+=2;
			continue;
		}
		else
		{
			i++;
			continue;
		}
	}
	cout<<count;
}
