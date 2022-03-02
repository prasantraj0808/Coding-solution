//https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/0/?category[]=Operators&page=1&query=category[]Operatorspage1
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
        int xorofelements=0;
        for(int i=0;i<N;i++)
        {
            xorofelements^=Arr[i];
        }
        int positionofset=0;
        while(xorofelements)
        {
            if(xorofelements & 1)
            {
                break;
            }
            else
            {
                positionofset++;
                xorofelements>>=1;
            }
        }
        int mask=1<<positionofset;
        int firstset=0,secondset=0;
        for(int i=0;i<N;i++)
        {
            if(Arr[i] & mask)
            firstset^=Arr[i];
            else
            secondset^=Arr[i];
        }
        vector<int>res;
        if(firstset>=secondset)
        {
        res.push_back(firstset);
        res.push_back(secondset);
        }
        else
        {
             
        res.push_back(secondset);
        res.push_back(firstset);
        
        }
        return res;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<int>ans=ob.twoOddNum(Arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends