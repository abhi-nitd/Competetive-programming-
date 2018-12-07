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
    set<int>t;
    for(int i=1;i<=n;i++)
    {
        if(max<v[i])
        {
            max=v[i];
            id=i;
            t.clear();
            t.insert(i);
        }
        else if(max==v[i])
        {
            t.insert(i);
        }
    }
    int maxa=0;
    auto utr=t.begin();
    vector<int>vc;
    while(utr!=t.end())
    {
        mt.erase(mt.find(a[*utr]));
        vc.push_back(a[*utr]);
        while(!vect[*utr].empty())
        {
            st.erase(vect[*utr].back());
            mt.erase(mt.find(a[vect[*utr].back()]));
            vc.push_back(vect[*utr].back());
            vect[*utr].pop_back();
        }
        if(!mt.empty())
        {
            if(maxa<*mt.rbegin())
            {
                maxa=*mt.rbegin();
            }
        }
        while(!vc.empty())
        {
            mt.insert(vc.back());
            vc.pop_back();
        }
        utr++;
    }
    cout<<max+maxa<<endl;
}
