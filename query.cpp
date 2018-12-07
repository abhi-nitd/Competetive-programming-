#include<bits/stdc++.h>
using namespace std;
#define max 1000005
int main()
{
	int arr[max]={0};
	int n;
	cin>>n;
	int i,x;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr[x]+=1;
	}
	int count[max];
	count[0]=arr[0];
	for(i=1;i<max;i++)
	{
		count[i]=count[i-1]+arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int y;
		cin>>y;
		cout<<count[y]<<endl;
	}
	
}