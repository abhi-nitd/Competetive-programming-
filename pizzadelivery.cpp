#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int h[n],k[n];
		int i,max=-1;
		for(i=0;i<n;i++)
		{
			cin>>h[i];
			if(h[i]>max)
				max=h[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>k[i];
		}
		int arr[1001],j;
		for(i=1;i<=2*max;i++)
		{
			arr[i]=1000000000;
		}
		arr[0]=0;
		for(i=1;i<=2*max;i++)
		{
			for(j=0;j<n;j++)
			{
				if(k[j]<=i)
				{
					int temp=arr[i-k[j]];
					if(temp<1000000000 && temp+1<arr[i])
					{
						arr[i]=temp+1;
					}
				}
			}
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum+=arr[2*h[i]];
		}
		cout<<sum<<endl;
//		for(i=0;i<=2*max;i++)
//			cout<<arr[i]<<" ";
	}
}
