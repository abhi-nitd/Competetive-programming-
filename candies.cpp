#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,test,sum=0;
	cin>>n;
	test=n;
	ll k=1;
	int flag=0;
	while(1)
	{
		test=n;
		flag=0;
		sum=0;
		while(test>0)
		{
//			if((test-k)<=0)
//			{
//				test=0;
//				sum=sum+test;
//			}
//			else if((test-k)>0)
//			{
//				test=test-k;
//				sum=sum+k;
//			}
//			if(test>9)
//			{
//				ll x=sum/10;
//				test=test-x;
//			}
			ll x=min(k,test);
			sum=sum+x;
			test=test-x;
			if(test>9)
				test=test-(test/10);
			if((2*sum)>=n)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
		k++;
	}
	cout<<k;
}
