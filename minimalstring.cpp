#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll arr[26]={0};
	string str,ans;
	cin>>str;
	ll n=str.length();
	ll i,j;
	stack <char> s;
	for(i=0;str[i];i++)
	{
		arr[str[i]-'a']++;
	}
//	for(i=0;i<26;i++)
//		cout<<arr[i];
	for(i=0;str[i];i++)
	{
		
		int flag;
		flag=0;
		for(j=((str[i]-'a')-1);j>=0;j--)
		{
			if(arr[j]>0)
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			while(!s.empty() && s.top()<=str[i])
			{
				ans.push_back(s.top());
				s.pop();
				
			}
			ans.push_back(str[i]);
		}
		else
		{
			s.push(str[i]);
		}
		arr[str[i]-'a']--;
	}
	while(!s.empty())
	{
		ans.push_back(s.top());
		s.pop();
	}
	cout<<ans;
}
