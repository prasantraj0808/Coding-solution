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

void kahn(int n)
{
	queue<int>q;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		q.push(i);
	}
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		res.push_back(curr);
		for(auto node:adj[curr])
		{
			in[node]--;
			if(in[node]==0)
			q.push(node);
		}
	}
	for(auto node:res){
		cout<<node<<"-->";
	}
}
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	adj.resize(n+1);
	in.resize(n+1);
		//res.resize(n+1);
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		in[y]++;
		
	}
	//res.clear();
	kahn(n);
	return 0;
}