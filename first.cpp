#include<bits/stdc++.h>
using namespace std;

bool mycomp(string s1,string s2)
{
    if(s1.length()<s2.length())
        return true;
}
int main()
{
   vector<int>v{1,4,2,91};
  
  if(binary_search(v.begin(),v.end(),91))
        cout<<"91 is present in the list";
    else
    {
        cout<<"91 is not present in the list";
    }


    return 0;
} 
