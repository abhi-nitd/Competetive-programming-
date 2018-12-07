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
		char arr[n][n],str[n][n];
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
				str[i][j]=arr[i][j];
//				cin>>str[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=n-2;j>=0;j--)
			{
				if(arr[j+1][i]=='#')
				{
					arr[j][i]='#';
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=n-2;j>=0;j--)
			{
				if(str[i][j+1]=='#')
				{
					str[i][j]='#';
				}
			}
		}
		int count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]=='.' && str[i][j]=='.')
					count++;
			}
//			cout<<endl;
		}
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<n;j++)
//			{
////				if(arr[i][j]=='.')
////					count++;
//				cout<<arr[i][j];
//			}
//			cout<<endl;
//		}
		cout<<count<<endl;
	}
}
