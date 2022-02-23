#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v{2,3,1,7,9,12};
   sort(v.begin(),v.end(),greater<int>());
   for(auto x:v)
   {
       cout<<x<<" ";
   }

    return 0;
} 
