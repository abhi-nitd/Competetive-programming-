#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll m,s;
	cin>>m>>s;
	ll small[m]={0},large[m],i,count=0,sum=s;
	if(s>9*m || s==0)
	{
		cout<<"-1 -1";
	}
	else
	{
		i=0;
		while(i<m)
		{
			if(i<m-1)
			{
				small[i]++;
				sum--;
				i++;
			}
			else
			{
				if(sum<10)
				{
					small[i]=sum;
					sum=0;
					i++;
				}
				else
				{
					if(i>0)
						i=i-1;
				}
			}
		}
		for(i=0;i<m;i++)
		{
			cout<<small[i];
		}
	}
	
}
