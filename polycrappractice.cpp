#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binarySearch(ll arr[], ll l, ll r, ll x)
{
   if (r >= l)
   {
        ll mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}
int main()
{
	ll n,k;
	cin>>n>>k;
	ll i,arr[n],temp[n],max[k],pos[k];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		temp[i]=arr[i];
	}
	sort(arr,arr+n);
	ll sum=0,j=0;
	for(i=n-1;i>=n-k;i--)
	{
		sum+=arr[i];
		max[j]=arr[i];
		j++;
	}
	cout<<sum<<endl;
	ll count=0;
	ll t=k;
	for(i=0;i<n;i++)
	{
		if(t>1)
		{
			
			ll ans=binarySearch(max,0,k-1,temp[i]);
			if(ans!=-1)
			{
				count++;
				max[ans]=-1;
				cout<<count<<" ";
				t--;
				count=0;
			}
			else
			{
				count++;
				
			}
		}
		else
		{
			cout<<n-i<<" ";
			break;
		}
	}
	
	
}
