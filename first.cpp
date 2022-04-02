#include<bits/stdc++.h> 

using namespace std; 

vector<vector <int>> adj; 
vector<int> visited; 
void dfs(int src) 

{ 

visited[src]=1; 
//cout<<src<<"--->";

for(auto child:adj[src]) 

{
if(visited[child]==0) 
{ 
dfs(child); 
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
int noofconnectedcomponent;
for(int i=1;i<=v;i++)
{
    if(visited[i]==0)
    {
        dfs(i);
        noofconnectedcomponent++;
    }
}
cout<<"no of connected component is"<<noofconnectedcomponent; 
return 0; 

} 