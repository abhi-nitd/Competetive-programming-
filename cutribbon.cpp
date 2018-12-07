#include<bits/stdc++.h>
using namespace std;
#define ll long long
void rec(ll v,ll arr[],ll res[])
{
	ll i;
	for(i=0;i<3;i++)
	{
		if(arr[i]<=v)
		{
			if(res[v-arr[i]]<res[v]+1)
			{
				res[v-arr[i]]=res[v]+1;
				rec(v-arr[i],arr,res);
			}
		}
	}
}
int main()
{
	ll n,arr[3];
	cin>>n>>arr[0]>>arr[1]>>arr[2];
	ll res[n+1]={0};
	rec(n,arr,res);
	cout<<res[0];
}
