// https://practice.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string0652/1/#
//https://www.youtube.com/watch?v=pp8K5C2hMr4
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}

// } Driver Code Ends


int CountPS(char s[], int n)
{
    //code here
   bool dp[n][n];
   int ans=0;
   for(int i=0;i<n;i++)
   {
       dp[i][i]=true;
      // ans++;
   }
  // cout<<"two length"<<endl;
   for(int i=0;i<n-1;i++)
   {
       if(s[i]==s[i+1])
       {
       dp[i][i+1]=true;
      // cout<<i<<"----->"<<i+1<<endl;
       ans++;
       }
       else
       dp[i][i+1]=false;
       
   }
  
   for(int len=2;len<=n;len++)
   {
       for(int i=0;i+len<n;i++)
       {
           if(s[i]==s[i+len])
           {
               if(dp[i+1][i+len-1]==true)
               {
               dp[i][i+len]=true;
               ans++;
               }
               else
               dp[i][i+len]=false;
           }
           else
           dp[i][i+len]=false;
       }
   }
   
    return ans;
    
}