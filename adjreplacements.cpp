#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,i;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			arr[i]--;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
