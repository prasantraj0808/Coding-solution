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
  bool  lexographichigher=next_permutation(s.begin(),s.end());
  cout<<s;

    return 0;
} 
