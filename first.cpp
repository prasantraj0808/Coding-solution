#include<bits/stdc++.h>
using namespace std;

bool mycomp(string s1,string s2)
{
    if(s1.length()<s2.length())
        return true;
}
int main()
{
   vector<int>v{1,4,3,2,91,3};
  
   sort(v.begin(),v.end());
   auto it=lower_bound(v.begin(),v.end(),3);
   auto it1=upper_bound(v.begin(),v.end(),3);
   cout<<"frequency of 3 is"<<it1-it; 

    return 0;
} 
