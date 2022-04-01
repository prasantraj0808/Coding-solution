
//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

        void swap(long long &x,long long &y)
        {
            long long temp;
            temp=x;
            x=y;
            y=temp;
        }
        long long max(long long a,long long b)
        {
            if(a>=b)
            return a;
            else
            return b;
        }
          long long min(long long a,long long b)
        {
            if(a>=b)
            return b;
            else
            return a;
        }

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   long long ma=arr[0],mi=arr[0],ans=arr[0];
	   for(int i=1;i<arr.size();i++)
	   {
	       if(arr[i]>=0)
	       {
	       ma=max(arr[i],ma*arr[i]);
	       mi=min(arr[i],mi*arr[i]);
	       }
	       else
	       {
	           swap(ma,mi);
	           ma=max(arr[i],ma*arr[i]);
	           mi=min(arr[i],mi*arr[i]);
	       }
	       if(ans<ma)
	       {
	           ans=ma;
	       }
	   }
	   return ans;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends