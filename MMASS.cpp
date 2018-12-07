#include<bits/stdc++.h>
using namespace std;
int val(char ch)
{
	switch(ch)
	{
		case 'H' : return 1;
		case 'O' : return 16;
		case 'C' : return 12;
		default : return 0;
	}
}
int main()
{
	char str[101];
	stack <int> s;
	scanf("%s",str);
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]=='(')
		{
			s.push(-2);
		}
		else if(isalpha(str[i]))
		{
			s.push(val(str[i]));
		}
		else if(isdigit(str[i]))
		{
			int k;
			k=s.top();
			s.pop();
			s.push(k*(str[i]-'0'));
		}
		else if(str[i]==')')
		{
			int k=0;
			while(!s.empty() && s.top()!=-2)
			{
				k=k+s.top();
				s.pop();
			}
			s.pop();
			s.push(k);
		}
	}
	i=0;
	while(!s.empty())
	{
		i=i+s.top();
		s.pop();
	}
	cout<<i<<endl;
}
