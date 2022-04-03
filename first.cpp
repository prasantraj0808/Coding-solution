//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/
#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> adj;
vector<int> visited;
//queue<int > q;
//vector<int>dist;
//vector<int>prime;
//vector<int> visitedvalid;
 
/*
 
bool isprime(int a)
{
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		return false;
		
	}
	return true;
}
bool isvalid(int a,int b)
{
	int count=0;
	while(b!=0)
	{
	if(a%10 != b%10)
	count++;
	a=a/10;
	b=b/10;
    }
    if(count==1)
    return true;
    else 
	return false; 
	
}
 
void buildgraph()
{
	for(int i=1000;i<=9999;i++)
      {
         if(isprime(i))
		 prime.push_back(i); 	
	  }	
 
	for(int i=0;i<prime.size();i++)
	{
		for(int j=i+1;j<prime.size();j++)
		
		{
			int a=prime[i],b=prime[j];
			
			if(isvalid(a,b))
			{
				adj[a].push_back(b);
				adj[b].push_back(a);
			}
		}
	}
}
 
*/
 
 
int no_of_var,no_of_rel,curr_cc=0;
vector<pair<int,int>> notequal;
vector<int >cc;
 
/*
bool  bfs(int v,int b)
{
    visited[v]=1;
    q.push(v);
   // dist[v]=0;
    int current=v;
    while(!q.empty())
    {
    	 current=q.front();
        q.pop();
        for(auto x:adj[current])
        {
        	if(x==b)
        	{
			  while(!q.empty())
			  q.pop();
        	return true;
            }
			
            if(visited[x]==0)
            {
              //  dist[x]=dist[current]+1;
                visited[x]=1;
                q.push(x);
            }
        }
       
    }
    //cout<<"bfs "<<endl;
}
 
*/
 
void dfs(int v)
{
	visited[v]=1;
	cc[v]=curr_cc;
	for(auto x : adj[v])
	{
		if(visited[x]==0)
		{
			dfs(x);
		}
	}
}
 
 
/*
bool valid(int a,int b,string r)
{
	if(r == "=")
	{
		if(visitedvalid[a]==1 && visitedvalid[b]==1)
		{
			if(bfs(a,b)==false)
			{
				for(int i=1;i<=no_of_var;i++)
				{
					visited[i]=0;
				}
				return false;
			}
			else
			return true;
		}
		else
		{
			adj[b].push_back(a);
			adj[a].push_back(b);
			visitedvalid[a]=1;
			visitedvalid[b]=1;
			return true;
		}
	}
	else
	{
		if(visitedvalid[a]==1 && visitedvalid[b]==1)
		{
			if(bfs(a,b)==true)
			{
				for(int i=0;i<no_of_var;i++)
				{
					visited[i]=0;
				}
				return false;
			}
			else
			return true;
		}
		else
		{
			visitedvalid[a]=1;
			visitedvalid[b]=1;
			return true;
		}
	}
}
 
*/
 
int main()
{
  /*
   int ini,des;
  // cout<<"enter the initial and the final prime no."<<endl;
   cin>>ini>>des;
   dist.resize(100007,-1);
   buildgraph();
   bfs(ini);
   cout<<dist[des];
 //  cout<<"hello";
    */
	
	 int t;
	 cin>>t;
	 for(int i=0;i<t;i++)
	 {
	 //	cout<<"enter the no of variables"<<endl;
	 	cin>>no_of_var;
	 //	cout<<"enter the no of relations"<<endl;
	 	cin>>no_of_rel;
	 	visited.resize(no_of_var+1,0);
	 //	visitedvalid.resize(no_of_var+1,0);
	 	adj.resize(no_of_var+1);
	 	cc.resize(no_of_var+1);
	 	
        int a,b;
		string rel;
		bool ans=true;
		for(int j=0;j<no_of_rel;j++)
		{
	//		cout<<"enter a relation and b"<<endl;
			cin>>a>>rel>>b;
		     if(rel == "=")
		     {
		     	adj[a].push_back(b);
		     	adj[b].push_back(a);
			 }
			 
			 else
			 {
			 	notequal.push_back({a,b});
			 }
				
			
	    } 
	    for(int k=1;k<=no_of_var;k++)
	    {
	    	if(visited[k]==0)
	    	{
	    		curr_cc++;
	    		dfs(k);
			}
		}
	    for(int k=0;k<notequal.size();k++)
	    {
	    	a=notequal[k].first;
	    	b=notequal[k].second;
	    	if(cc[a]==cc[b])
	    	{
	    		ans=false;
	    		break;
			}
		}
		if(ans==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		for(int j=1;j<=no_of_var;j++)
		{
		  visited[j]=0;
		  adj[j].clear();
		  cc[j]=0;
		  //visitedvalid[j]=0;
		}
	     notequal.clear();	
		 curr_cc=0;
	 }
	    
 
    return 0;
}
Language: C++14