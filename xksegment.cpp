#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int binarySearch(ll arr[], ll l, ll r, ll x,ll *count)
//{
//   if (r >= l)
//   {
//        ll mid = l + (r - l)/2;
// 
//        // If the element is present at the middle 
//        // itself
//        if (arr[mid] == x)  
//            count++;
// 
//        // If element is smaller than mid, then 
//        // it can only be present in left subarray
//        if (arr[mid] > x) 
//            return binarySearch(arr, l, mid-1, x,count);
// 
//        // Else the element can only be present
//        // in right subarray
//        return binarySearch(arr, mid+1, r, x,count);
//   }
// 
//   // We reach here when element is not 
//   // present in array
//   return -1;
//}
int main()
{
	ll n,x,k,count=0;
	
	cin>>n>>x>>k;
	if(x==0)
	{
		cout<<"0";
	}
//	else if(x==1)
//	{
//		cout<<n*n;
//	}
	else
	{
		map <int,int> mp;
		map <int,int> :: iterator it;
		ll i;
		multiset <int, greater <int> > ms;
		multiset <int, greater <int> > :: iterator mit;
		for(i=0;i<n;i++)
		{
			ll m;
			cin>>m;
			
			mp[m]++;
			ms.insert(m);
//			if(mp.find(arr[i])==mp.end())
//			{
//				mp.insert(make_pair(arr[i],1));
//			}
//			else
//			{
//				it=mp.find(arr[i]);
//				(it->second)++;
//			}
		}
//		sort(arr,arr+n);
		int flag=0;
		come:
		for(mit=ms.begin();mit!=ms.end();mit++)
		{
			ll l,u;
			flag=0;
			if((*mit)%x==0)
			{
				l=(((*mit)/x)+1)*x+(x*(k-2));
				u=(((*mit)/x)+1)*x+(x*(k-1));
				ll j;
				if(l>u)
				{
					ll t=u;
					u=l;
					l=t;
				}
				for(j=l;j<u;j++)
				{
					if(ms.find(j)!=ms.end())
					{
						it=mp.find(j);
						count=count+(it->second);
						ms.erase(mit);
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
					break;
				}
			}
			else
			{
				l=(((*mit)/x)+1)*x+(x*(k-1));
				u=(((*mit)/x)+1)*x+(x*(k));
				ll j;
				if(l>u)
				{
					ll t=u;
					u=l;
					l=t;
				}
				for(j=l;j<u;j++)
				{
					if(ms.find(j)!=ms.end())
					{
						it=mp.find(j);
						count=count+(it->second);
						ms.erase(mit);
						flag=1;
						break;
					}
			
				}
				if(flag==1)
				{
					break;
				}
			}
			
		}
		if(flag==1)
		{
			goto come;
		}
		cout<<count;
	}
	
}
