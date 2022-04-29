//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	int factorial(int n)
	{
	    int ans=1;
	    for(int i=1;i<=n;i++)
	    {
	        ans=ans*i;
	        
	    }
	    return ans;
	}
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<char>chararray;
		    for(int i=0;i<s.length();i++)
		    {
		        chararray.push_back(s[i]);
		    }
		    sort(chararray.begin(),chararray.end());
		    string sortedstring="";
		    for(auto x:chararray)
		    sortedstring=sortedstring+x;
		    int n=s.length();
		    int noofper=factorial(n);
		    vector<string>ans;
		    ans.push_back(sortedstring);
		    for(int i=2;i<=noofper;i++)
		    {
		        next_permutation(sortedstring.begin(),sortedstring.end());
		        ans.push_back(sortedstring);
		    }
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends