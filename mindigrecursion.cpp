#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct obj
{
	ll min;
	ll op;
};
ll s(ll m)
{
	ll sum=0;
	while(m)
	{
		sum+=m%10;
		m=m/10;
	}
	return sum;
}
obj mindig(ll x,ll dis,obj var,ll step,ll org)
{
	if(x==1)
	{
		if(var.min>x)
		{
			var.min=x;
			var.op=step;
		}
		else if(var.min==x && var.op>step)
		{
			var.op=step;
		}
		return var;
	}
	if(x==org && step>0)
	{
		if(var.min>x)
		{
			var.min=x;
			var.op=step;
		}
		else if(var.min==x && var.op>step)
		{
			var.op=step;
		}
		return var;
	}
	
	if(var.min>x)
	{
		var.min=x;
		var.op=step;
	}
	else if(var.min==x && var.op>step)
	{
		var.op=step;
	}
//		return var;
	obj k1,k2;
	k1=mindig(x+dis,dis,var,step+1,org);
	if(k1.min<var.min)
	{
		var=k1;
	}
	else if(k1.min=var.min && k1.op<var.op)
	{
		var=k1;
	}
	x=s(x);
	k2=mindig(x,dis,var,step+1,org);
	if(k2.min<var.min)
	{
		var=k2;
	}
	else if(k2.min=var.min && k2.op<var.op)
	{
		var=k2;
	}
	
	return var;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		obj el;
		el.min=n;
		el.op=0;
		if(n==1)
		{
			cout<<"1 0"<<endl;
		}
		else
		{
			el=mindig(n,d,el,0,n);
			cout<<el.min<<" "<<el.op<<endl;
		}
	}

}
