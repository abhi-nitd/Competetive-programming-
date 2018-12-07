#include<bits/stdc++.h>
using namespace std;
int p(int low,int high)
{
	if((high-low)==1)
	{
		return 0;
	}
	return ((high-low)+p(low,(low+high)/2)+p((low+high)/2,high));
}
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
	
		cin>>n>>m;
		
		int max=0;
		int i;
		for(i=2;i<=n+1;i++)
		{
			max+=i;
		}
		int min;
		min=p(1,n+2);
		if(m<min)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else if(m>=min && m<=max)
		{
			cout<<"0"<<endl;
			continue;
		}
		else if(m>max)
		{
			cout<<m-max<<endl;
			continue;
		}
		
	}
}
