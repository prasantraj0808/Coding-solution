bool dfs(int v,int c) 

{ 

visited[v]=1; 

col[v]=c; 

for(auto child: adj[v]) 

{ 

if(visited[child]==0) 

{ 

if(dfs(child,c^1)==false) 

return false; 

} 

else 

if(col[v]==col[child]) 

return false;  

 

} 

return true; 

} 