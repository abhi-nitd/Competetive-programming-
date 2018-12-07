#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll k=3,i=6,arr[100000];
	arr[0]=2;
	arr[1]=3;
	arr[2]=5;
	while(k<10001)
	{
		ll j;
		int flag;
		flag=0;
		for(j=0;j<k;j++)
		{
			if(i%arr[j]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			
			arr[k]=i;
			k++;
		}
		i++;
	}
	cout<<arr[10000];
}
