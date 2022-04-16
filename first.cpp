//https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
//https://www.youtube.com/watch?v=dpsp1hP6P-U
// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends


int counter(int mat[MAX][MAX],int n,int k,int mid)
{
    int count=0;
    int i=0,j=n-1;
    for(i=0;i<n;i++)
    {
        for(j;j>=0;j--)
        {
            if(mat[i][j]<=mid)
            {
              count=count+j+1;
              break;
            }
        }
    }
    return count;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int l=mat[0][0];
  int h=mat[n-1][n-1];
  while(l<h)
  {
      int mid=floor(((h-l)/2)+l);
      int count=counter(mat,n,k,mid);
      if(count>=k)
      h=mid;
      else
      l=mid+1;
  }
  return l;
}
