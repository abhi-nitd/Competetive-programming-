 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll i,n1,n2,m;
		cin>>n1>>n2>>m;
		ll s=(m*(m+1))/2;
		ll x=min(min(n1,n2),s);
		cout<<(n1+n2-2*x)<<endl;
////		if(n1>s)
////		{
////			n1=n1-s;
////		}
////		else
////		{
////			n1=0;
////		}
////		if(n2>s)
////		{
////			n2=n2-s;
////		}
////		else
////		{
////			n2=0;
////		}
////		ll sum=n1+n2;
////		cout<<sum<<endl;
//		if(s>=n1 && s>=n2)
//		{
//			cout<<"0"<<endl;
//		}
//		else if()
//		else
//		{
//		
//		for(i=m;i>0;i--)
//		{
//			if(n1>=i && n2>=i)
//			{
//				n1=n1-i;
//				n2=n2-i;
//				
//			}
//			if(n1==0 || n2==0)
//			{
//				break;
//			}
//			
//		}
//		cout<<n1+n2<<endl;
//		}
	}
}
