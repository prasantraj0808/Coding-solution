#include<bits/stdc++.h> 

 

using namespace std; 

 

vector<vector <int>> adj; 

vector<int> dist; 

vector<int> visited; 

 

void dfs(int src,int dista) 

{ 

visited[src]=1; 

dist[src]=dista; 

for(auto x:adj[src]) 

{ 

if(visited[x]==0) 

{ 

dfs(x,dista+1); 

} 

} 

} 

int main() 

{ 

int v,e; 

cout<<"enter the no. of vertices and edges"<<endl; 

cin>>v>>e; 

adj.resize(v+1); 

int a,b; 

cout<<"enter the corresponding connected vertices"<<endl; 

for(int i=0;i<e;i++) 

{ 

cin>>a>>b; 

adj[a].push_back(b); 

adj[b].push_back(a); 

} 

int src=1; 

visited.resize(v+1,0); 

dist.resize(v+1); 

dfs(src,0); 

for(int i=1;i<=v;i++) 

{ 

cout<<dist[i]<<"  "; 

} 

 

return 0; 

} 