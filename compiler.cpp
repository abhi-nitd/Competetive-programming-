#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char arr[10000000];
		scanf("%s",arr);
		int i,gr=0,le=0,ans=0;
		for(i=0;arr[i];i++)
		{
			if(arr[i]=='>')
			{
				gr++;
			}
			else if(arr[i]=='<')
			{
				le++;
			}
			if(gr>le)
			{
				break;
			}
		}
		cout<<ans<<endl;
	}
}
