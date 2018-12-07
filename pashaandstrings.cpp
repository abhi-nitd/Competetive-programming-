#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string str;
	cin>>str;
	ll n;
	ll x=(str.length()/2);
//	cout<<x<<endl;
	cin>>n;
//	vector <int> v;
	ll i,j,max=0;
	ll arr[x+1]={0};
	for(i=0;i<n;i++)
	{
		ll k;
		cin>>k;
//		if(k>max)
//		{
//			max=k;
//		}
//		v.push_back(k);
//		for(j=k;j<=x;j++)
//		{
		arr[k]++;
//		}
	}
	
	for(i=1;i<=x;i++)
	{
		arr[i]=arr[i]+arr[i-1];
	}
//	for(i=0;i<=x;i++)
//		cout<<arr[i]<<endl;
//	sort(v.begin(),v.end());
//	vector <int> :: iterator it;
//	it=unique(v.begin(),v.end());
//	v.resize(distance(v.begin(),it));
	for(i=1;i<=x;i++)
	{
//		if(v[i]!=max)
//		{
			if((arr[i]%2)!=0)
			{
				swap(str[i-1],str[str.length()-i]);
			}
//		}
//		else if(v[i]==max)
//		{
//			if((arr[v[i]]%2)!=0)
//			{
////				for(j=v[i]-1;j<=str.length()/2;j++)
////				{
////					swap(str[j],str[str.length()-j-1]);
////				}
//				reverse(str.begin()+max-1,str.end()-max+1);
//			}
//		}
	}
	cout<<str;
	
}
