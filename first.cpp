//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int x=str.length();
		    int y=str.length();
		   int mat[x+1][y+1];
        for(int i=0;i<=y;i++)
        mat[0][i]=0;
        for(int j=0;j<=x;j++)
        {
            mat[j][0]=0;
        }
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                 if(str[i-1]==str[j-1] && i!=j)
                   mat[i][j]=1+mat[i-1][j-1];
                   else
                   {
                       mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                   }
            }
        }
        return mat[x][y];
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends