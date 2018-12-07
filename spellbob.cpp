#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char up[3],down[3];
		int i;
		cin>>up>>down;
		int flag=0;
		if((up[0]=='b' || down[0]=='b')&&(up[1]=='o' || down[1]=='o')&&(up[2]=='b' || down[2]=='b'))
		{
			flag=1;
		}
		if((up[0]=='b' || down[0]=='b')&&(up[1]=='b' || down[1]=='b')&&(up[2]=='o' || down[2]=='o'))
		{
			flag=1;
		}
		if((up[0]=='o' || down[0]=='o')&&(up[1]=='b' || down[1]=='b')&&(up[2]=='b' || down[2]=='b'))
		{
			flag=1;
		}
		if(flag==1)
		{
			cout<<"yes"<<endl;
		}
		if(flag==0)
		{
			cout<<"no"<<endl;
		}
	}
}
