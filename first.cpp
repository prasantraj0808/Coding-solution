//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxi=-1,maxirow=-1;
	    for(int i=0;i<n;i++)
	    {
	        
	         auto x=upper_bound(arr[i].begin(),arr[i].end(),0);
        //cout<<"position of x is"<<v.end()-x+1<<endl;
        if(x!=arr[i].end())
        {
        int noof0=x-arr[i].begin();
        //cout<<"no of 1 is"<<
        int noof1=m-noof0;
        if(noof1>maxi)
        {
            maxi=noof1;
            maxirow=i;
        }
        }
	        /*
	        auto firstarrivalof1=upper_bound(arr[i].begin(),arr[i].end(),0);
	        int noof1=m-(*firstarrivalof1)+1;
	        if(noof1>maxi)
	        {
	            maxi=noof1;
	            maxirow=i;
	        }
	        */
	    }
	    return maxirow;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends