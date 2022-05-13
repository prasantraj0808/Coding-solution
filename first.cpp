//https://leetcode.com/problems/longest-common-prefix/submissions/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int min=INT_MAX;
        for(auto x:strs)
        {
            if(min>x.length())
            {
                min=x.length();
            }
        }
        int flag=0;
        char currentchar;
        string currentstring;
        for(int i=0;i<min;i++)
        {
            currentstring=strs[0];
            currentchar=currentstring[i];
            for(auto x :strs)
            {
                if(x[i]!=currentchar)
                {
                    flag=1;
                    return ans;
                }
            }
            ans=ans+currentchar;
        }
        
       return ans; 
    }
};