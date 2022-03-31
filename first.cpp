//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        bool ans;
        unordered_map<int,int>mp;
        mp[arr[0]]++;
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i]+arr[i-1];
            if(arr[i]==0)
            {
                ans=true;
                return ans;
            }
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>1)
            {
                ans=true;
                break;
                
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends