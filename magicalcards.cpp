#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,k,j,index=0;
	cin>>t;
	bool arr[100001]={true};
	for(i=2;i*i<=100001;i++)
	{
		if(arr[i]==true)
		{
			for(k=i*2;k<=100001;k+=i)
			{
				arr[i]=false;
			}
		}
	}
	vector<pair<int,int> >v;
	while(t--)
	{
		int num;
		cin>>num;
		j=2;
		while(num>1)
		{
			if(arr[j]==true)
			{
				if(num%j==0)
	            {
	                v.push_back(make_pair(j,0));
	                while(num%j==0)
	                {
	                    num=num/j;
	                    v[index].second++;
	                }
	                index=index+1;
	            }
	            else
	            {
	            	j++;
				}
			}
		}
		long long count=0;
        long long mul=1,rum=1;
        while(i<v.size())
        {
            count=count+v[i].second;
            for(int k=2;k<=v[i].second;k++)
            {
                mul=mul*k;
            }
            i++;
        }
        for(int i=2;i<=count;i++)
        {
            rum=rum*i;
        }
        printf("%lld\n",rum/mul);
	}
}
