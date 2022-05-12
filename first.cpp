//https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1#
//https://www.youtube.com/watch?v=vTMXv-thazI
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	   int i=1,j=0,n=s.length();
	   vector<int>lps(n,0);
	   while(i<n)
	   {
	       if(s[j]==s[i])
	       {
	       lps[i]=j+1;
	       i++;
	       j++;
	       }
	       else
	       {
	           if(j==0)
	           {
	               lps[i]=0;
	               i++;
	           }
	           else
	           {
	               j=lps[j-1];
	               
	           }
	       }
	   }
	   return lps[n-1];
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends