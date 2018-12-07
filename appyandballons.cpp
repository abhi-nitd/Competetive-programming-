#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	cin>>n>>m;
//	multimap <int,int> mul;
	ll a[n],price[n];
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll max=-1;
	for(i=0;i<n;i++)
	{
		cin>>price[i];
		if(max<price[i]*a[i])
		{
			max=price[i]*a[i];
		}
	}
	ll low=0,high=max,mid;
	while(low<high)
	{
		ll candy=low+(high-low)/2;
		ll balloon=0;
		for(i=0;i<n;i++)
		{
			ll k=candy/price[i];
			if(a[i]-k>0)
			{
				balloon+=(a[i]-k);
			}
		}
		if(m>=balloon)
		{
			high=candy;
		}
		else
		{
			low=candy+1;
		}
	}
	cout<<low;
	
//	for(i=0;i<n;i++)
//	{
//		mul.insert(make_pair(price[i]*left[i],i));
//	}
//	multimap <int,int> :: iterator itr;
////	for(itr=mul.begin();itr!=mul.end();itr++)
////	{
////		cout<<itr->first<<" "<<itr->second<<endl;
////	}
//	while(m--)
//	{
//		itr=mul.end();
//		itr--;
//		i=itr->second;
//		if(left[itr->second]>0)
//			left[itr->second]--;
//		else
//			break;
//		mul.erase(itr);
//		mul.insert(make_pair(price[i]*left[i],i));
//		itr=mul.end();
//		itr--;
////		cout<<itr->first<<" "<<itr->second;
//	}
//	cout<<itr->first;
	
}
