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
  cout<<*min_element(v.begin(),v.end())<<endl;
  
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<min_element(v.begin(),v.end())-v.begin();


    return 0;
} 
