#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		long long n;
		cin>>n;
		if(n==0)
		{
			break;
		}
		long long arr[n];
		long long i,marea=-1;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		stack <long long> s;
		for(i=0;i<n;i++)
		{
			if(s.empty())
			{
				s.push(i);
			}
			else if(!s.empty() && arr[i]>=arr[s.top()])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty() && arr[s.top()]>arr[i])
				{
					long long area;
				
					long long k=s.top();
					s.pop();
					if(s.empty())
					{
						area=arr[k]*i;
					}
					else
					{
						area=arr[k]*(i-s.top()-1);
					}
					if(area>marea)
					{
						marea=area;
					}
				}
				s.push(i);
			}
		}
		while(!s.empty())
		{
			long long area, k=s.top();
			s.pop();
			if(s.empty())
			{
						area=arr[k]*i;
			}
			else
			{
						area=arr[k]*(i-s.top()-1);
			}
			if(area>marea)
			{
						marea=area;
			}
		}
		cout<<marea<<endl;
	}
}
