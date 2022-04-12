//https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
int countSmallerThanMid(vector<int>&row,int mid)
{
    int l=0,h=row.size()-1,md=(l+h)/2;
    while(l<=h)
    {
        md=(l+h)/2;
        if(row[md]<=mid)
        l=md+1;
        else
        h=md-1;
        
    }
    return l;
}
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int low=1,high=2000;
        int n=r;
        int m=c;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                cnt+=countSmallerThanMid(matrix[i],mid);
                
            }
            if(cnt<=(n*m)/2)
            low=mid+1;
            else
            high=mid-1;
            
        }
        return low;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends