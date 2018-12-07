#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll op=0;
		ll n,d;
		cin>>n>>d;
		ll in=(n%9==0)?9:n%9;
		ll c=in;
		ll k=n;
		ll min=10,mark=100000000;
		if(in<min)
		{
			min=in;
			mark=0;
		}
		while(in!=1)
		{
			k=k+d;
			in=(k%9==0)?9:k%9;
			op++;
			if(in<min)
			{
				min=in;
				mark=op;
			}
			if(in==c)
			{
				break;
			}
		}
		ll ans=n+(mark*d);
		ll sum=0,count=0;
		while(ans>9)
		{
			count++;
			sum=0;
			while(ans)
			{
				
				sum+=ans%10;
				ans=ans/10;
			}
			ans=sum;
		}
		cout<<min<<" "<<mark+count<<endl;

	}
	
}
