#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n;
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			if(abs(b-a)>5)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}
