#include<bits/stdc++.h> 

using namespace std; 

vector<vector <int>> adj; 
vector<int> visited; 
bool dfs(int src) 

{ 

visited[src]=1; 
//cout<<src<<"--->";

for(auto child:adj[src]) 

{
if(visited[child]==0) 
{ 
    if(dfs(child)==true)
    return true;
} 
else{
    if(visited[child]==1)
    return true;
}

} 
    visited[src]=2;
    return false;
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
//adj[b].push_back(a); 

} 
int src=1; 

visited.resize(v+1,0); 
bool ans=dfs(src);
cout<<ans; 
return 0; 

} 