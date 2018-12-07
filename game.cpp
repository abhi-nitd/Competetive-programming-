#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i,mark=0,flag=0;
		for(i=0;s[i];i++)
		{
			if(s[i]<'9' && s[i]>'0')
			{
				int j;
				for(j=max(0,i-(s[i]-'0'));j<=min(int(s.length()-1),i+(s[i]-'0'));j++)
				{
					if((s[j]=='+' || (s[j]>'0'&&s[j]<'9')) && j!=i)
					{
						flag=1;
						break;
					}
					else
					{
						s[j]='+';
					}
				}
			}
		}
		if(flag==1)
		{
			cout<<"unsafe"<<endl;
		}
		else
		{
			cout<<"safe"<<endl;
		}
	}
}
