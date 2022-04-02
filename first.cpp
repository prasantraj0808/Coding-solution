#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int>visited;
int maxD,maxNode;

void dfs(int node,int d)
{
    visited[node]=1;
    if(d>maxD)
    {
        maxD=d;
        maxNode=node;
    }
    for(auto child:adj[node])
    {
        if(visited[child]==0)
        {
            dfs(child,d+1);
        }
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    adj.resize(n+1);
    visited.resize(n+1,0);
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    maxD=-1;
    dfs(1,0);
    maxD=-1;
    for(int i=1;i<=n;i++)
    visited[i]=0;
    dfs(maxNode,0);
    cout<<maxD;
    return 0;
}