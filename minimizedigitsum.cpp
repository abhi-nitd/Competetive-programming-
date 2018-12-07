#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll op=0;
		ll n,d,i,j,k;
		cin>>n>>d;
		ll mina=n,min=10,mark=0;
		ll minb=d;
		if(mina>9)
		{
			if(mina%9!=0)
				mina%=9;
			else
				mina=9;
		}
		if(minb>9)
		{
			if(minb%9!=0)
				minb%=9;
			else
				minb=9;
		}
		ll ans=mina;
		
		if(mina<min)
		{
				min=mina;
				mark=0;
		}
		while(mina!=1)
		{
			
			mina=(mina+minb);
			if(mina>9)
			{
				if(mina%9!=0)
					mina%=9;
				else
					mina=9;
			}
			op++;
			if(mina<min)
			{
				min=mina;
				mark=op;
			}
			if(mina==ans)
			{
				break;
			}
		}
		ans=n+(mark*d);
		ll sum=0,count=0;
		while(ans>9)
		{
			count++;
			sum=0;
			while(ans)
			{
				
				sum+=ans%10;
				ans=ans/10;
			}
			ans=sum;
		}
		if(count<2)
		{
			cout<<min<<" "<<mark+count<<endl;
		}
		else  if(count==2)
		{
			ans=n;
			int flag=0;
			for(i=1;i<=mark;i++)
			{
				for(j=1;j<=mark;j++)
				{
					if(j==i)
					{
						while(ans)
						{
							sum+=ans%10;
							ans=ans/10;
						}
						ans=sum;
						ans=ans+d;
					}
					ans+=d;
				}
				if(ans<10)
				{
					count=1;
					break;
				}
			}
			cout<<min<<" "<<mark+count<<endl;
		}
		else if(count==3)
		{
			ans=n;
			int flag=0;
			for(i=1;i<=mark;i++)
			{
				ans=n;
				for(j=1;j<=mark;j++)
				{
					if(j==i)
					{
						while(ans)
						{
							sum+=ans%10;
							ans=ans/10;
						}
						ans=sum;
						ans=ans+d;
					}
					ans+=d;
				}
				if(ans<10)
				{
					count=1;
					break;
				}
			}
			if(count==1)
			{
				cout<<min<<" "<<mark+count<<endl;
			}
			else
			{
				ans=n;
				flag=0;
				for(i=1;i<mark;i++)
				{
					for(j=i+1;j<=mark;j++)
					{
						ans=n;
						for(k=1;k<=mark;k++)
						{
							if(k==i || k==j)
							{
								while(ans)
								{
									sum+=ans%10;
									sum=sum/10;
								}
								ans=sum;
								ans+=d;
							}
							ans+=d;
						}
						if(ans<10)
						{
							count=2;
							break;
						}
					}
					if(count==2)
						break;
				}
				cout<<min<<" "<<mark+count<<endl;

			}
		}
	}
}
