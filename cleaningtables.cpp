#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll arr[500]={0};
		ll n,m;
		cin>>n>>m;
		ll order[m],table[n]={0};
		ll i,j,count=0;
		int flag=0;
		for(i=0;i<m;i++)
		{
			cin>>order[i];
			arr[order[i]]++;
		}
		for(i=0;i<m;i++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				if(order[i]==table[j])
				{
					arr[order[i]]--;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				continue;
			}
			for(j=0;j<n;j++)
			{
				if(table[j]==0)
				{
					table[j]=order[i];
					arr[order[i]]--;
					count++;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				continue;
			}
			for(j=0;j<n;j++)
			{
				if(arr[table[j]]<2)
				{
					//arr[table[j]]--;
					arr[order[i]]--;
					table[j]=order[i];
					count++;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				continue;
			}
			ll max=0,place=0;
			for(j=0;j<n;j++)
			{
				ll k;
				for(k=i+1;k<m;k++)
				{
					if(table[j]==order[k])
					{
						if(k>max)
						{
							max=k;
							place=j;
						}
						break;
					}
				}
				
			}
			arr[order[i]]--;
			table[place]=order[i];
			count++;
			
			
		}
		cout<<count<<endl;
	}
}
