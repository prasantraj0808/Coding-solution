//https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
//https://www.youtube.com/watch?v=wkDfsKijrZ8
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n=x.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='[' || x[i]=='{' || x[i]=='(')
            st.push(x[i]);
            else
            {
                if(st.empty()==false)
                {
                    char c=st.top();
                    if(x[i]==']' && c=='[' || x[i]=='}' && c=='{' || x[i]==')' && c=='('  )
                     {
                        st.pop();
                  
                     }
                    else
                     {
                       return false;
                     }
                }
                else 
                 return false;
               
            }
        }
        if(st.empty()==true)
        return true;
        
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends