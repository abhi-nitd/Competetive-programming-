#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll n=s.length();
		ll freq[26]={0},arr[n];
		ll i,j,sum=0;
		for(i=0;s[i];i++)
		{
			freq[s[i]-'a']++;
			
		}
		ll max=-1,pos=-1;
		for(i=n-1;i>=0;i--)
		{
			sum=0;
			for(j=0;j<(s[i]-'a');j++)
			{
				sum+=freq[j];
			}
			arr[i]=sum;
			if(pos==-1)
			{
				max=sum;
				pos=i;
			}
			else
			{
				if(max<sum)
				{
					max=sum;
					pos=i;
				}
				else if(max==sum && s[i]<s[pos])
				{
					max=sum;
					pos=i;
				}
			}
			freq[s[i]-'a']--;
		}
//		for(i=0;i<n;i++)
//		{
//			cout<<arr[i];
//		}
		char min='z';
		for(i=pos;i>=0;i--)
		{
			if(s[i]<min)
			{
				min=s[i];
			}
		}
		if(arr[pos]>s[pos]-min)
		{
			arr[pos]=s[pos]-min;
		}
		sum=0;
		for(i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		
		
		cout<<sum<<endl;
	}
}
