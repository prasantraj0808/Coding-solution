#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<string,int>bill;
    bill.insert({"tea",10});
    bill["maggi"]=20;
    bill.insert(make_pair("dosa",30));
    for(auto it=bill.begin();it!=bill.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
} 
