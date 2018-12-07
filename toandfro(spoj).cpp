#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	while(1)
	{
		ll col;
		cin>>col;
		if(col==0)
			break;
		string str;
		cin>>str;
		ll l=str.length();
		ll i,j;
		ll row=l/col;
		char arr[row][col];
		ll k=0;
		for(i=0;i<row;i++)
		{
			if(i%2==0)
			{
				j=0;
				while(str[k] && j<col)
				{
					arr[i][j]=str[k];
					j++;
					k++;
				}
			}
				
			else
			{
				j=col-1;
				while(str[k] && j>=0)
				{
					arr[i][j]=str[k];
					j--;k++;
				}
			}
			
		}
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				cout<<arr[j][i];
			}
			
		}
		
		cout<<endl;
	}
}
