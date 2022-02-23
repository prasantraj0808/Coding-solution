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
  
    auto it=find(v.begin(),v.end(),91);
    if(it!=v.end())
    {
        cout<<"91 is present";
        cout<<endl<<"position is "<<it-v.begin();
    }
    else
    {
        cout<<"91 is not present";
    }


    return 0;
} 
