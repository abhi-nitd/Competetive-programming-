#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll freq[100005]={0},i,max=-1;
	long long res[100005]={0};
	for(i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		freq[a]++;
		if(a>max)
		{
			max=a;
		}
	}
	res[0]=0;
	res[1]=freq[1];
	for(i=2;i<=100004;i++)
	{
		if((freq[i]*i)+res[i-2]>res[i-1])
		{
			res[i]=freq[i]*i + res[i-2];
		}
		else
		{
			res[i]=res[i-1];
		}
	}
	cout<<res[100004];
	
}
