//https://www.youtube.com/watch?v=Bg0Y9__J8UE
// https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    stack<char>st;
    int ans=0,n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{')
        st.push('{');
        else
        {
            if(s[i]=='}' && st.empty()==true)
            {
                ans++;
                st.push('{');
            }
            else
            {
                st.pop();
            }
        }
        
    }
    if(st.empty()==true)
    return ans;
    else
    {
        if(st.size()%2!=0)
        return -1;
        else
        return
        ans+=st.size()/2;
    }
}