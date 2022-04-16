//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long currentarea,maxiarea=INT_MIN;
        long long nextsmaller[n];
        long long previoussmaller[n];
        stack<int >st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            previoussmaller[i]=-1;
            else
            previoussmaller[i]=st.top();
            st.push(i);
        }
        /*
        cout<<"printing previous smaller array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<previoussmaller[i]<<"  ";
            
        }
        cout<<endl;
        */
        
        while(!st.empty())
        st.pop();
        
        for(int i=n-1;i>=0;i--)
        {
            
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            nextsmaller[i]=n;
            else
            nextsmaller[i]=st.top();
            st.push(i);
        }
        int start=0,end=n-1,temp;
        /*
        while(start<end)
        {
            temp=nextsmaller[start];
            nextsmaller[start]=nextsmaller[end];
            nextsmaller[end]=temp;
            start++;
            end--;
            
        }
        */
        //reverse(nextsmaller,nextsmaller+n);
        /*
         cout<<"printing next smaller array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<nextsmaller[i]<<"  ";
            
        }
        cout<<endl;
        */
        for(int i=0;i<n;i++)
        {
            //if(nextsmaller[i]==n)
            currentarea=(nextsmaller[i]-previoussmaller[i]-1)*arr[i];
            /*
            else
             currentarea=(nextsmaller[i]-previoussmaller[i]-1)*arr[i];
             */
            if(maxiarea<currentarea)
            maxiarea=currentarea;
        }
        return maxiarea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends