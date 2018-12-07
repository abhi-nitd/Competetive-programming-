#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll i,count=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n-1;i++)
	{
		if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
		{
			arr[i+1]=0;
			count++;
		}
	}
	cout<<count;
}
