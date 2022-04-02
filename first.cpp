//https://www.spoj.com/problems/BUGLIFE/
#include<bits/stdc++.h>

using namespace std;

vector <int> visited;
vector <int> col;
vector<vector<int>> adj;
 
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
int main()
{
	int nos;
	cin>>nos;
 bool ans;
 int nov,noe;
 for(int j=1;j<=nos;j++)
 {
 
 //cout<<"enter the no. of vertices"<<endl;
 cin>>nov;
 //cout<<"enter the no. of edges"<<endl;
 cin>>noe;
 
 visited.resize(nov+1,0);
 	col.clear();
 col.resize(nov+1);
adj.resize(nov+1);

 		for(int i=1;i<=nov;i++)
 	{
 		adj[i].clear();
 		visited[i]=0;
	}

int a,b;
for(int i=0;i<noe;i++)
{
	cin>>a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
} 
 
 ans=dfs(1,0);
 int k=1;
 if(ans==0)
 {
    cout<<"Scenario #"<<j<<":"<<endl<<"Suspicious bugs found!"<<endl;
 }
 else
 {
      	while(k<=nov)
      	{
      		if(visited[k]==0)
      	     ans=dfs(k,0);
			   if(ans==0)
                 {
 	                cout<<"Scenario #"<<j<<":"<<endl<<"Suspicious bugs found!"<<endl;
 	                break;
                 }	
                 k++;
		}
 }
 
 if(ans==1)
    cout<<"Scenario #"<<j<<":"<<endl<<"No suspicious bugs found!"<<endl;
    
 k=1;
// cout<<ans;
ans=-1;
	
}
	
	return 0;
}