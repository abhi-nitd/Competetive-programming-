#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>k;
		string s;
		cin>>s;
		ll n=s.length();
		if(s[0]==s[n-1])
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			int flag;
			ll i;
			for(i=0;i<n;i++)
			{
				if(s[i]=='?')
				{
					
					if(i==0)
					{
						ll j;
						flag=0;
						for(j=0;j<k;j++)
						{
							if(s[i+1]!='j' && s[n-1]!='j')
							{
								s[i]=j;
								flag=1;
								break;
							}
						}
						if(flag==0)
						{
							cout<<"NO"<<endl;
							break;
						}
						
					}
					else if(i==n-1)
					{
						ll j;
						flag=0;
						for(j=0;j<k;j++)
						{
							if(s[i-1]!='j' && s[0]!='j')
							{
								s[i]=j;
								flag=1;
								break;
							}
						}
						if(flag==0)
						{
							cout<<"NO"<<endl;
							break;
						}
					}
					else
					{
						ll j;
						flag=0;
						for(j=0;j<k;j++)
						{
							if(s[i-1]!='j' && s[i+1]!='j')
							{
								s[i]=j;
								flag=1;
								break;
							}
						}
						if(flag==0)
						{
							cout<<"NO"<<endl;
							break;
						}
					}
					
				}
			}
			if(flag!=0)
			{
				cout<<s<<endl;
			}
			
			
		}
		
	}
}
