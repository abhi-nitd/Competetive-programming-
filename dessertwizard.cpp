#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n]={0},minl[n]={0},minr[n]={0},maxl[n]={0},maxr[n]={0},lmaxrmin[n-1]={0},lminrmax[n-1]={0};
		ll i;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		minl[0]=arr[0];
		maxl[0]=arr[0];
		for(i=1;i<n;i++)
		{
			if(minl[i-1]+arr[i]<arr[i])
			{
				minl[i]=minl[i-1]+arr[i];
			}
			else
			{
				minl[i]=arr[i];
			}
			if(maxl[i-1]+arr[i]>arr[i])
			{
				maxl[i]=maxl[i-1]+arr[i];
			}
			else
			{
				maxl[i]=arr[i];
			}
		}
		minr[n-1]=arr[n-1];
		maxr[n-1]=arr[n-1];
		for(i=n-2;i>=0;i--)
		{
			if(minr[i+1]+arr[i]<arr[i])
			{
				minr[i]=minr[i+1]+arr[i];
			}
			else
			{
				minr[i]=arr[i];
			}
			if(maxr[i+1]+arr[i]>arr[i])
			{
				maxr[i]=maxr[i+1]+arr[i];
			}
			else
			{
				maxl[i]=arr[i];
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<minl[i]<<" ";
		}
		cout<<endl;
			for(i=0;i<n;i++)
		{
			cout<<minr[i]<<" ";
		}
		cout<<endl;
			for(i=0;i<n;i++)
		{
			cout<<maxl[i]<<" ";
		}
		cout<<endl;
			for(i=0;i<n;i++)
		{
			cout<<maxr[i]<<" ";
		}
		cout<<endl;
		ll max1=-1,max2=-1,max3=-1,max4=-1;
		ll j,k1,k2;
		for(i=0;i<n-1;i++)
		{
			max1=-1;
			max2=-1;
			for(j=i+1;j<n;j++)
			{
			
			
				k1=abs(minl[i]-maxr[j]);
				if(max1<k1)
				{
					max1=k1;
				}
				
				k2=abs(maxl[i]-minr[j]);
				if(max2<k2)
				{
					max2=k2;
				}
			}
			lminrmax[i]=max1;
			lmaxrmin[i]=max2;
			if(max3<max1)
				max3=max1;
			if(max4<max2)
				max4=max2;
			
		}
		if(max3>max4)
			max4=max3;
		cout<<max4;
		for(i=0;i<n-1;i++)
		{
			cout<<lminrmax[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<n-1;i++)
		{
			cout<<lmaxrmin[i]<<" ";
		}
		
	}
}
