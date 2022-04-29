// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence
// https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#
//https://www.youtube.com/watch?v=sSno9rV8Rhg
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int mat[1002][1002];
    
    
    int lcsa(string s1,string s2,int i,int j)
    {
        int entry;
        
        if(i==s1.length() || j==s2.length())
        {
            mat[i][j]=0;
            return 0;
        }
        else if(s1[i]==s2[j])
        {
            if(mat[i][j]==-1)
            {
            entry=1+lcsa(s1,s2,i+1,j+1);
            mat[i][j]=entry;
            return entry;
            }
            else
            {
                return mat[i][j];
            }
        }
       
        else
        {
             
        
        return (max(lcsa(s1,s2,i+1,j),lcsa(s1,s2,i,j+1)));
        }
        
    }
    int lcs(int n1, int n2,string s1, string s2)
    {
        /*
        // your code here
        static int i,j;
         if(i==n1 || j==n2)  //make another function
             return 0;
    else if(s1[i]==s2[j])
    {
        return 1+lcs(n1,n2,s1,s2);

    }
    else
    return max(lcs(n1,n2,s1,s2),lcs(n1,n2,s1,s2));
    */
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            mat[i][j]=-1;
        }
    }
    int ans=lcsa( s1,s2,0,0);
    return ans;
    }
    
    
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends