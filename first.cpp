#include<bits/stdc++.h>
using namespace std;

bool mycomp(string s1,string s2)
{
    if(s1.length()<s2.length())
        return true;
}
int main()
{
   vector<string>v{"prasant","akhilesh","modi","nitish"};
   sort(v.begin(),v.end(),mycomp);
   reverse(v.begin(),v.end());
   for(auto x:v)
   {
       cout<<x<<" ";
   }

    return 0;
} 
