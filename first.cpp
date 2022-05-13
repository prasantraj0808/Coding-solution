//https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int n=s.length();
        unordered_map<char,int>ump;
        ump['I']=1;ump['V']=5;ump['X']=10,ump['L']=50;ump['C']=100;ump['D']=500;ump['M']=1000;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(ump[s[i]]>=ump[s[i+1]])
            ans=ans+ump[s[i]];
            else
            {
                ans=ans-ump[s[i]];
            }
        }
        ans=ans+ump[s[n-1]];
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends