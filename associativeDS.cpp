#include<bits/stdc++.h>
using namespace std;
int main()
{
	set <int> s;
	s.insert(7);
	s.insert(2);
	s.insert(8);
	set <int> :: iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i;
	}
}
