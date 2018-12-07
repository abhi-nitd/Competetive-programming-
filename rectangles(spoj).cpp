#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	ll i,j,count=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i*j<=n)
				count++;
			else
				break;
		}
	}
	cout<<count;
}
