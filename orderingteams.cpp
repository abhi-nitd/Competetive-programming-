#include<bits/stdc++.h>
using namespace std;
//struct icpc
//{
//	int a;
//	int b;
//	int c;
//};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
//		icpc arr[3];
		int i;
		
//		sort(arr,arr+3);
		vector < pair <int ,pair<int,int> > > vec;
		for(i=0;i<3;i++)
		{
			int a,c,b;
			cin>>a>>b>>c;
			pair<int, pair<int,int> >  var;
			var.first=a;
			var.second.first=b;
			var.second.second=c;
			vec.push_back(var);
			
		}
		sort(vec.begin(),vec.end());
		int greator=0,correct=0;
		for(i=0;i<2;i++)
		{
			if(vec[i+1].first<vec[i].first)
			{
				correct=-1;
				break;
				
			}
			if(vec[i+1].second.first<vec[i].second.first)
			{
				correct=-1;
				break;
			}
			if(vec[i+1].second.second<vec[i].second.second)
			{
				correct=-1;
				break;
			}
			if(vec[i+1].first==vec[i].first && vec[i+1].second.first==vec[i].second.first && vec[i+1].second.second==vec[i].second.second)
			{
				correct=-1;
				break;
			}
		}
		if(correct==0)
		{
			cout<<"yes"<<endl;
		}
		else if(correct==-1)
		{
			cout<<"no"<<endl;
		}
		
	}
}
