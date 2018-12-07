#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int a[n+1];
    map<int,int>st;
    multiset<int>mt;
    v.push_back(0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
        st.insert(make_pair(i,a[i]));
        mt.insert(a[i]);
    }
    vector<int>vect[n+1];
    int b,c;
    for(int i=0;i<m;i++)
    {
        cin>>b>>c;
        vect[b].push_back(c);
        vect[c].push_back(b);
        v[b]+=a[c];
        v[c]+=a[b];
    }
    int max=0,id=0;
    for(int i=1;i<=n;i++)
    {
        if(max<v[i])
        {
            max=v[i];
            id=i;
        }
    }
    mt.erase(mt.find(a[id]));
    while(!vect[id].empty())
    {
        st.erase(vect[id].back());
        mt.erase(mt.find(a[vect[id].back()]));
        vect[id].pop_back();
    }
    if(mt.size()>0)
    {
        cout<<max+(*mt.rbegin());
    }
    else
    {
        cout<<max;
    }
}
