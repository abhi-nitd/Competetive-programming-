#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll m,n;
		cin>>m>>n;
		ll i,j;
		for(i=m;i<=n;i++)
		{
			int flag=0;
			for(j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(i>1 && flag==0)
			{
				cout<<i<<endl;
			}
		}
	}
}
