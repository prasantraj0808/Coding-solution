#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    set<int>s;
    s.insert(6);
    s.insert(8);
    s.insert(16);
    s.insert(11);

    for(auto x:s)
    {
        cout<<x<<"--->";
    }
    cout<<endl;
    cout<<*s.lower_bound(6)<<endl;
    cout<<*s.upper_bound(6)<<endl;
    s.erase(s.find(8));
     for(auto x:s)
    {
        cout<<x<<"--->";
    }
    cout<<endl;
    

    return 0;
} 
