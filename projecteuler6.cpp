#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll s,n=100,k;
	s=(n*(n+1))/2;
	k=(2*n+1)/3;
	s=s*(s-k);
	cout<<s;
}
