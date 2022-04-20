//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string a) {
        // code here
         int j,k,counteven=0,countodd=0,maxeven=1,maxodd=1,maxall;
        int n=a.length();
        string mid="";
        mid=mid+a[0];  //can be problem
        string ans="",templeft="",tempright="",perleft="",perright="";
         string templefto="",temprighto="",perlefto="",perrighto="";
        for(int i=0;i<=n-2;i++)
        {
            if(a[i]==a[i+1])
            {
                j=i,k=i+1;
                while(j>=0 && k<n)
                {
                    if(a[j]==a[k])
                    {
                        counteven+=2;
                        templeft=templeft+a[j];
                        tempright=tempright+a[k];
                        j--;k++;

                    }
                    else
                    break;
                }
            }
            //maxeven=max(maxeven,counteven);
            if(counteven>maxeven)
            {
                reverse(templeft.begin(),templeft.end());
                perleft=templeft;
                perright=tempright;
               
                
                maxeven=counteven;
            }
             templeft="";
                tempright="";
            counteven=0;
        }
        for(int i=0;i<=n-3;i++)
        {
            if(a[i]==a[i+2])
            {
                j=i;k=i+2;
                while(j>=0 && k<n)
                {
                    if(a[j]==a[k])
                    {
                        countodd+=2;
                        templefto=templefto+a[j];
                         temprighto=temprighto+a[k];

                        j--;k++;
                    }
                    else
                    break;
                    
                }
                
            }
            //maxodd=max(maxodd,countodd);
            if(countodd>maxodd)
            {
                mid=a[i+1];
                reverse(templefto.begin(),templefto.end());
                perlefto=templefto;
                perrighto=temprighto;
               
                maxodd=countodd;

            }
             templefto="";
                temprighto="";
            countodd=0;
        }
        if(maxodd==1 && maxeven==1)
        {
            return mid;
        }
        else if(maxodd>=maxeven)
        {
            ans=ans+perlefto;
            ans=ans+mid;
            ans=ans+perrighto;
            return ans;
        }
        else{
                ans=ans+perleft;
                ans=ans+perright;
                return ans;
        }
        /*
        if(maxodd>maxeven)
        {
             if(maxodd==0)
               return 1;
               else
               return maxodd+1;
        }
       
        else
        {
            if(maxeven==0)
               return 1;
               else
               return maxeven;
        }
        */
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends