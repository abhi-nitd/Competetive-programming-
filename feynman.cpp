#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	while(1)
	{
		ll n;
		cin>>n;
		if(n==0)
			break;
		n=(n*(n+1)*(2*n+1))/6;
		cout<<n<<endl;
	}
}
