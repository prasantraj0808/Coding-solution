//https://www.spoj.com/problems/SUBMERGE/
#include<bits/stdc++.h>

using namespace std;
//int n; // number of nodes
vector<vector<int>> adj; // adjacency list of graph

vector<bool> visited;
vector<int> tin, low;
int timer=0;
int ans=0;
 set<int, greater<int> > s1;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= tin[v] && p!=-1)
            s1.insert(v);
                 //ans++;
                // cout<<"vertex"<<v <<"is an articulation point"<<endl;
                //IS_CUTPOINT(v);
               
            ++children;
        }
    }
    if(p == -1 && children > 1)
    s1.insert(v);
    //ans++;
    // cout<<"vertex"<<v <<"is an articulation point"<<endl;
       // IS_CUTPOINT(v);
}

int main() 
{
    //timer = 0;
    
    int n,e,a,b;
   cin>>n>>e;
    while(n!=0 || e!=0)
    {
    
    adj.resize(n+1);
    for(int j=0;j<e;j++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    
    visited.resize(n+1, false);
    tin.resize(n+1, -1);
    low.resize(n+1, -1);
    
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
            dfs (i);
    }
    
    //dfs(1);
    cout<<s1.size()<<endl;
    for(int k=1;k<=n;k++)
    {
    	adj[k].clear();
    	tin[k]=-1;
    	low[k]=-1;
    	visited[k]=false;
	}
	tin.clear();
	low.clear();
	s1.clear();
    timer=0;
    cin>>n>>e;
    }
    return 0;
}