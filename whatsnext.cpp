#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	while(1)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
			break;
		if((b-a)==(c-b))
		{
			cout<<"AP "<<c+(b-a)<<endl;
		}
		else
		{
			cout<<"GP "<<c*b/a<<endl;
		}
	}
}
