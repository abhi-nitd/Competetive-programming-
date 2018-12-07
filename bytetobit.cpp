#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==0)
		{
			cout<<"1 0 0"<<endl;
		}
		else
		{
			n--;
			int k=n/26;
			ll pop=pow(2,k);
			k=n%26;
			if(k>=0 && k<=1)
			{
				cout<<pop<<" 0 0"<<endl;
			}
			else if(k>=2 && k<=9)
			{
				cout<<"0 "<<pop<<" 0"<<endl;
			}
			else if(k>=10 && k<=25)
			{
				cout<<"0 0 "<<pop<<endl;
			}
		}
	
	}
}
