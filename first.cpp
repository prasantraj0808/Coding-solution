#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    unordered_map<int,int>mp;
    mp[1]=100;
    mp.insert({4,299});
    mp.insert({6,567});
    if(mp.find(6)!=mp.end())
    {
        cout<<"element exist"<<endl;
       cout<< mp.find(6)->second;

    }
    else
    {
        cout<<"element does not exist";
    }
    cout<<endl<<mp.size()<<endl;
    mp.erase(mp.find(6));
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
} 
