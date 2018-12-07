#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll j,k,sum1=0,sum3=0,msum=0;
	i=0;
	j=n-1;
	while(i<=j)
	{
		if(sum1<sum3)
		{
			sum1+=arr[i];
			i++;
		}
		if(sum1>sum3)
		{
			sum3+=arr[j];
			j--;
		}
		if(sum1==sum3)
		{
			msum=sum1;
			sum1+=arr[i];
			i++;
		}
		
	}
	cout<<msum<<endl;
}
