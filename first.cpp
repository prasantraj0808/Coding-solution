//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> adj;
vector<int> visited;
queue<int > q;
vector<int>dist;
void  bfs(int v)
{
    visited[v]=1;
    q.push(v);
    dist[v]=0;
    int current=v;
    while(!q.empty())
    {
    	 current=q.front();
        q.pop();
        for(auto x:adj[current])
        {
            if(visited[x]==0)
            {
                dist[x]=dist[current]+1;
                visited[x]=1;
                q.push(x);
            }
        }
       
    }
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    int v,e;
 //  cout<<"enter the no. of vertices"<<endl;
   cin>>v;
   //cout<<"enter the no. of edges"<<endl;
   cin>>e;
   adj.resize(v+1);
   visited.resize(v+1,0);
   //cout<<"enter the edges "<<endl;
   int a,b;
   for(int i=1;i<=e;i++)
   {
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   dist.resize(v+1,0);
   bfs(1);
  cout<<dist[v]<<endl;
  /*
  for(int i=1;i<=v;i++)
  {
  	cout<<visited[i]<<"   ";
  }
  for(int i=1;i<=v;i++)
  {
  	cout<<dist[i]<<"   ";
  }
 
  */
  for(int i=1;i<=v;i++)
  {
      dist[i]=0;
      adj[i].clear();
      visited[i]=0;
  } 
    }
        
 
    return 0;
}
