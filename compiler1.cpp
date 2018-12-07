#include<bits/stdc++.h>
using namespace std;
#define ll 1000001
int main()
{
	//cout<<"hello";
	int t;
	cin>>t;
	while(t--)
	{
		char arr[ll];
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
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
