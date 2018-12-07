#include<bits/stdc++.h>
using namespace std;
struct doll
{
	int w;
	int h;
};
bool condition(doll a,doll b)
{
	if(a.h==b.h)
	{
		return a.w<b.w;
	}
	return a.h>b.h;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <doll> v;
		int i,m;
		cin>>m;
		for(i=0;i<m;i++)
		{
			doll a;
			cin>>a.w>>a.h;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),condition);
		int j,lis[m]={1};
		int max=1;
		for(i=1;i<m;i++)
		{
			for(j=0;j<i;j++)
			{
				if(v[j].w>v[i].w && v[j].h>v[i].h && lis[i]<lis[j]+1)
				{
					lis[i]=lis[j]+1;
				}
			}
			if(max<lis[i])
			{
				max=lis[i];
			}
		}
		
//		for(i=0;i<m;i++)
//		{
//			cout<<lis[i]<<endl;
//		}
		cout<<m-max+1<<endl;
	}
}
