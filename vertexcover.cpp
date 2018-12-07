#include <iostream>
#include <vector>
#include <cstring>
 
using namespace std;
 
vector<int> adj_list[100005];
int dp[100005][2];
 
int dfs(int node, int parent, bool ptaken)
{
    if (dp[node][ptaken] != -1)
        return dp[node][ptaken];
    
    int taking = 1;
    int not_taking  = 0;
    
    for (int neig : adj_list[node])
        if (neig != parent)
        {
            taking += dfs(neig, node, true);
            not_taking += dfs(neig, node, false);
        }
    
    if (ptaken)
        dp[node][ptaken] = min(taking, not_taking);
    else
        dp[node][ptaken] = taking;
    
    return dp[node][ptaken];
}
 
int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    
    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    memset(dp, -1, sizeof(dp));
    cout<<dfs(1, 0, true)<<endl;
 
    return 0;
}
