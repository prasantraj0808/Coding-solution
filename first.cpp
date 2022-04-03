#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int>in;
vector<int>low;
vector<int>visited;
int timer=0;
void dfs(int node,int par)
{
	in[node]=low[node]=timer;
	timer++;
	visited[node]=1;
	for(auto child:adj[node])
	{
		if(child==par)
		continue;
		if(visited[child]==1)
		{
			low[node]=min(in[child],low[node]);
		}
		else{
			dfs(child,node);
			if(low[child]>in[node])
			cout<<node<<"-->"<<child<<"is a bridge"<<endl;
			low[node]=min(low[node],low[child]);
		}
	}
}
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	adj.resize(n+1);
	in.resize(n+1);
	visited.resize(n+1);
	low.resize(n+1);
	while(m--)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1,-1);
	return 0;
}