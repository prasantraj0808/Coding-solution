//https://www.youtube.com/watch?v=fJaKO8FbDdo
//https://practice.geeksforgeeks.org/problems/edit-distance3702/1
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
 
    int editDistance(string s1, string s2) {
        // Code here
        int n=s1.size(),m=s2.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       for(int j=0;j<=m;j++) dp[0][j]=j;
       for(int i=0;i<=n;i++) dp[i][0]=i;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
        if(s1[i-1]==s2[j-1])
      dp[i][j]=dp[i-1][j-1];
      else
      {
       dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));  //delete  insert replace 
      }
           }
       }
       return dp[n][m];
       
        
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends