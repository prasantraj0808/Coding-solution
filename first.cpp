#include<bits/stdc++.h>
using namespace std;

class Food{
 public:
 string fname;
 int id;
 Food(string f,int i)
 {
     fname=f;
     id=i;
 }
 bool operator<(const Food &f)const{
    if(this->fname.length()<f.fname.length())
    {
        return true;
    }
    else if(this->fname.length()==f.fname.length())
    {
        return this->id<f.id;
    }
    else{
        return false;
    }
 }
};
int main()
{
    map<Food,int>bill;
    Food f1("dosa",1),f2("maggi",2),f3("coffee",4),f4("pizza",3);
    bill.insert({f1,30});
    bill.insert({f2,50});
    bill.insert({f3,49});
    bill.insert({f4,67});
    for(auto x:bill)
    {
        cout<<x.first.fname<<" "<<x.second<<endl;
    }

    return 0;
} 
