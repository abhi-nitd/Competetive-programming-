#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		ll arr[n];
		ll i,j;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll ans[n]={0};
		ll count=0;
		
		do
		{
			ll sum[n];
			sum[0]=arr[0];
			for(i=1;i<n;i++)
			{
				sum[i]=arr[i]+sum[i-1];
			}
			for(i=0;i<n;i++)
			{
				count=0;
				for(j=0;j<n;j++)
				{
					if(j<=i)
					{
						if(j==0)
						{
							if(sum[i]>=p)
							{
								count++;
							}
						}
						else
						{
							if(sum[i]-sum[j-1]>=p)
							{
								count++;
							}
						}
					}
					else
					{
						if(i==0)
						{
							if(sum[j]>=p)
							{
								count++;
							}
							
						}
						else
						{
							if(sum[j]-sum[i-1]>=p)
							{
								count++;
							}
						}
					}
					if(count>ans[i])
					{
						ans[i]=count;
					}
				}
			}
		}while(next_permutation(arr,arr+n));
		for(i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
