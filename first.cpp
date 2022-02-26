#include<bits/stdc++.h>
using namespace std;


int main()
{
    multimap<int,int >mp;
    mp.insert({1,3});
    //mp[1]=4;      this will not work
    mp.insert({1,4});

    mp.insert({8,99});
    mp.insert({12,8});

    cout<<"frequency of 1 is "<<mp.count(1)<<endl;
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    mp.erase(1);
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;
} 
