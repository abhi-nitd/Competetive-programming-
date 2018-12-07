#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,arr[26]={0},leave[26]={0},count[26]={0};
	cin>>n>>k;
	string str;
	cin>>str;
	for(i=0;str[i];i++)
	{
		arr[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(k>=arr[i])
		{
			k=k-arr[i];
			leave[i]=arr[i];
		}
		else if(k<arr[i])
		{
			leave[i]=k;
			k=0;
		}
		if(k==0)
		{
			break;
		}
	}
	for(i=0;str[i];i++)
	{
		if(count[str[i]-'a']==leave[str[i]-'a'])
		{
			cout<<str[i];
		}
		else
		{
			count[str[i]-'a']++;
		}
	}
}
