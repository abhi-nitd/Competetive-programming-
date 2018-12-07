#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll step=a-b;
        ll no=k/2;
        ll ex=k%2;
        ll ans=no*step + ex*a;
        cout<<ans<<endl;
    }
}
