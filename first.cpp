//https://www.spoj.com/problems/TOPOSORT/
/*
input

9
10
1
2
3
4
1
8
2
9
2
5
4
5
4
8
5
9
5
7
6
7

output

1-->3-->6-->2-->4-->5-->8-->9-->7-->

*/

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>adj;
vector<int> res;
vector<int>in;

bool kahn(int n)
{
	priority_queue<int,vector<int>,greater<int>>q;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		q.push(i);
	}
	while(!q.empty())
	{
		int curr=q.top();
		q.pop();
		res.push_back(curr);
		for(auto node:adj[curr])
		{
			in[node]--;
			if(in[node]==0)
			q.push(node);
		}
	}
	return res.size()==n;
}
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	adj.resize(n+1);
	in.resize(n+1,0);
		//res.resize(n+1);
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		in[y]++;
		
	}
	//res.clear();
	
	
	bool ans=kahn(n);
	if(ans==true)
	{
		for(auto node:res)
		cout<<node<<" ";
	}
	else{
		cout<<"Sandro fails.";
	}
	
	return 0;
}