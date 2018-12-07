#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string str,s;
	cin>>str;
	ll i,j,count=0;
	ll n=str.length();
	int flag=0,pos=-1;
	for(i=0;i<n;i++)
	{
		if(flag==0)
		{
			if(str[i]=='0')
			{
				cout<<"0";
			}
			else if(str[i]=='1')
			{
				count++;
			}
			else if(str[i]=='2')
			{
				flag=1;
				s.push_back(str[i]);
				pos=i;
			}
		}
		else
		{
			if(str[i]=='1')
			{
				count++;
			}
			else
			{
				s.push_back(str[i]);
			}
		}
	}
	for(i=0;i<count;i++)
	{
		cout<<"1";
	}
	cout<<s;
//	for(i=pos;i<n;i++)
//	{
//		if(str[i]!='1')
//		{
//			cout<<str[i];
//		}
//	}
	
}
