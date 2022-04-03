//https://www.spoj.com/problems/PPATH/
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int>visited;
vector<int>primes;
vector<int>dist;
queue<int>q;

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return false;
        
      
    }
      return true;
}
bool isvalid(int a,int b)
{
    int count=0;
    while(a>0)
    {
        if(a%10 != b%10)
        count++;
        a/=10;
        b/=10;
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
        {
            primes.push_back(i);
        }
    }
    for(int i=0;i<primes.size();i++)
    {
        for(int j=i+1;j<primes.size();j++)
        {
            int a=primes[i];
            int b=primes[j];
            if(isvalid(a,b))
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
    }

}
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
    int t,a,b;
    cin>>t;
    adj.resize(10000);
    buildgraph();
    while(t--)
    {
        cin>>a>>b;
        dist.resize(10000,-1);
        visited.resize(10000,0);
        primes.resize(10000);
        bfs(a);

        if(dist[b]==-1)
        cout<<"Impossible"<<endl;
        else
        cout<<dist[b]<<endl;
        for(int i=1000;i<=9999;i++)
        {
            dist[i]=-1;
            visited[i]=0;

        }

    }
    return 0;
}