#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//	cout<< __builtin_popcount (4) << endl;
	int t;
	cin>>t;
	while(t--)
	{
		ll low,up,i,j,n,temp,count=0,var,min=1000000001;
		cin>>n;
		if(n==1)
		{
			cout<<"2"<<endl;
		}
		else if(__builtin_popcount (n)==1)
		{
			cout<<"1"<<endl;
		}
//		else if(n<20)
//		{
//			low=n;
//			up=n;
//			while((__builtin_popcount (low)!=2) || (__builtin_popcount (up)!=2))
//			{
//				count++;
//				if(low>0)
//					low--;
//				up++;
//			}
//			cout<<count<<endl;
//		}
		else
		{
		
			temp=n;
			while(temp)
			{
				temp=temp>>1;
				count++;
			}
		
		
			for(i=count;i>=1;i--)
			{
				for(j=i-1;j>=0;j--)
				{
					var=(1<<i)+(1<<j);
					if(abs(n-var)<min)
					{
						min=abs(n-var);
					}
				}
			}
			cout<<min<<endl;
		}
//		cin>>n;
//		low=n;
//		up=n;
//		while((__builtin_popcount (low)!=2) || (__builtin_popcount (up)!=2))
//		{
//			count++;
//			if(low>0)
//				low--;
//			up++;
//		}
//		cout<<count<<endl;
	}
}
