
//https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        vector<ll>psum;
        psum.push_back(arr[0]);
        for(int j=1;j<n;j++)
        {
            psum.push_back(arr[j]+psum[j-1]);
        }
        ll count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(psum[i]==0 && arr[i]==0)
            {
                mp[0]++;
                count+=mp[0];
            }
            else if(psum[i]==0 )
            {
                mp[0]++;
                count+=mp[0];
            }
            else if(arr[i]==0  && mp[psum[i]]==0)
            {
                 mp[psum[i]]++;
                count+=1;
            }
            else
            {
                mp[psum[i]]++;
                if(mp[psum[i]]>1)
                count+=mp[psum[i]]-1;
            }
            
            
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends