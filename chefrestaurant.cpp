#include<bits/stdc++.h>
using namespace std;
#define ll long long
//struct res
//{
//	int start;
//	int end;
};

bool c(res a,res b)
{
	if(a.start==b.start)
	{
		return a.end<b.end;
	}
	return a.start<b.start;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll i;
		res arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i].start>>arr[i].end;
		}
		sort(arr,arr+n,c);
//		for(i=0;i<n;i++)
//		{
//			cout<<arr[i].start<<" "<<arr[i].end<<endl;
//			
//		}
		while(m--)
		{
			int q;
			ll mid;
			cin>>q;
			ll low=0,high=n-1;
			mid=lower_bound(arr.start,arr.start+n,q);
//			while(low<high)
//			{
//				mid=low+(high-low)/2;
//				if(arr[mid].start<=q)
//				{
//					low=mid;
//				}
//				else
//				{
//					high=mid-1;
//				}
//			}
			cout<<mid;
			if(q>=arr[mid].start && q<arr[mid].end)
			{
				cout<<"0"<<endl;
			}
			else if(mid>=n-1)
			{
				if(q<arr[mid].start)
				{
					cout<<arr[mid].start-q<<endl;
				}
				else
					cout<<"-1"<<endl;
			}
			else if(mid==0)
			{
				if(q>=arr[mid].start && q<arr[mid].end)
				{
					cout<<"0"<<endl;
				}
				else
				{
					cout<<abs(arr[mid].start-q)<<endl;
				}
			}
			else
			{
				cout<<arr[mid+1].start-q<<endl;
			}
		}
		
	}
}
