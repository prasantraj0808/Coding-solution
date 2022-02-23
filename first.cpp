#include<bits/stdc++.h>
using namespace std;

bool mycomp(string s1,string s2)
{
    if(s1.length()<s2.length())
        return true;
}
int main()
{
    string s="prasant";
    string org=s;
    sort(s.begin(),s.end());
    int i=1;
    do{
        cout<<s<<endl;
        if(s==org)
        break;
        i++;
    }while(next_permutation(s.begin(),s.end()));
    cout<<i;
    prev_permutation(s.begin(),s.end());
    return 0;
} 
