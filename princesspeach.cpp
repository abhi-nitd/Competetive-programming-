#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dp[100001]={0},i,max=0,count=0;
		string s;
		cin>>s;
		if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
		{
			dp[0]=1;
			max=1;
			count=1;
		}
		for(i=1;s[i];i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				dp[i]=dp[i-1]+1;
			}
			else if(dp[i-1]-1>dp[i])
			{
				dp[i]=dp[i-1]-1;
			}
			if(dp[i]>0)
				count++;
			else
				count=0;
			if(count>max)
			{
				max=count;
			}
			
		}
		cout<<max<<endl;
	}
	
}
