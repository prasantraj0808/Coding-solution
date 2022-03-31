//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mp;
        int twicecount=0,count;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
           twicecount+=mp[k-arr[i]];
           if(arr[i]==k-arr[i])
           twicecount--;
        }
        // code here
        count=twicecount/2;
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends