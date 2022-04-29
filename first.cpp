#include<bits/stdc++.h>

using namespace std;
void func(string s,int n,string t,int i)
{
    if(i==n)
    {
        cout<<t<<endl;
    }
    else{
        func(s,n,t,i+1);
        t=t+s[i];
        func(s,n,t,i+1);
    }
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    func(s,n,"",i);
    return 0;
}