//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int l,r,ans=0;
        for(int i=0;i<n-2;i++)
        {
            l=i+1;
            r=n-1;
            while(l<r)
            {
                if(A[i]+A[l]+A[r]==X)
                {
                    ans=1;
                    break;
                }
                else if(A[i]+A[l]+A[r]<X)
                l++;
                else
                r--;
            }
            if(ans==1)
            break;
        }
        if(ans==1)
        return 1;
        else
        return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends