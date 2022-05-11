//https://practice.geeksforgeeks.org/problems/word-break1352/1#
//https://www.youtube.com/watch?v=hLQYQ4zj0qg

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
map<string,bool>Map;
int dfs(string s,set<string>&Set)
{
    if(s=="")
    return true;
    if(Map.find(s)!=Map.end())
    {
        return Map[s];
    }
    
    for(int i=1;i<=s.length();i++)
    {
        if(Set.find(s.substr(0,i))!=Set.end() && dfs(s.substr(i,s.length()),Set))
        {
            Map[s.substr(0,i)]=true;
        return true;
        }
    }
    Map[s]=false;
    return false;
}
    int wordBreak(string s, vector<string> &B) {
        //code here
        set<string>Set;
        for(auto x:B)
        {
            Set.insert(x);
        }
        return dfs(s,Set);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends