#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
   	ll arr[n];
    for(int i =0;i <n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    stack<int> st;
   	ll maxx = 0;
    for(int i=0;i <n;i++)
    {
        while(!st.empty())
        {
            maxx = max(maxx,arr[i]^arr[st.top()]);
            if(arr[i]<arr[st.top()])
            break;
            st.pop();
            
           
        }
        st.push(i);
    }
   cout << maxx <<endl;
   
}

