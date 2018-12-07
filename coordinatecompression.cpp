#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s,min=0;
		ll less[n]={0},less1[n]={0},sum=0,j,ans[n]={0};
		cin>>n>>s;
		map <ll,ll> mp;
		map <ll,ll> :: iterator itr;
		ll arr[n];
		ll i;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			mp.insert(make_pair (arr[i],i));
		}
		ll k=0;
		while(k<n)
		{
			
			if(k==0)
			{
				sum=n;
			}
			else
			{
				for(i=0;i<n;i++)
				{
					for(j=i-k;j<=i+k;j++)
					{
						if(j>=0 && j<n)
						{
							if(arr[j]<arr[i])
							{
								less[i]++;
							}
						}
					}

				}
				for(itr=mp.begin();itr!=mp.end();itr++)
				{
					i=itr->second;
					ll count=0,max=0;
					for(j=i-k;i>=i+k;j++)
					{
						if(j>=0&&j<n)
						{
							if(ans[j]>0)
							{
								count++;
							}
							if(ans[j]>max)
							{
								max=ans[j];
							}
						}
					}

					if(less[i]<count)
					{
						ans[i]=max;
					}
					else
					{
						ans[i]=max+1;
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=i-k;j<=i+k;j++)
					{
						if(j>=0 && j<n)
						{
							if(ans[j]<ans[i])
							{
								less1[i]++;
							}
						}
					}
				}
				min=0;
				for(i=0;i<n;i++)
				{
					min+=ans[i];
				}
				int z=0;
				for(i=0;i<n;i++)
				{
					if(less[i]!=less1[i])
					{
						
						z=1;
					}
					
				}
				if(z==0)
				{
					break;
				}
				
//				cout<<k<<endl;
//				for(i=0;i<n;i++)
//				{
//					cout<<ans[i]<<" ";
//				}
//				cout<<endl;
			}
//			if(z==0)
//			{
//				break;
//			}
			k++;
		}
		
		if(min > s)
		{
			cout<<"1"<<endl;
			
		}
		
		else
		{
			ll j;
		
			while(k<n)
			{
				for(itr=mp.begin();itr!=mp.end();itr++)
					{
						i=itr->second;
						ll count=0,max=0;
						for(j=i-k;i>=i+k;j++)
						{
							if(j>=0&&j<n)
							{
								if(ans[j]>0)
								{
									count++;
								}
								if(ans[j]>max)
								{
									max=ans[j];
								}
							}
						}
	
						if(less[i]<count)
						{
							ans[i]=max;
						}
						else
						{
							ans[i]=max+1;
						}
					}
					min=0;
					for(i=0;i<n;i++)
					{
						min+=ans[i];
					}
					if(min>s)
					{
						break;
					}
					k++;
			}
			cout<<k<<endl;
		}
	}
}
