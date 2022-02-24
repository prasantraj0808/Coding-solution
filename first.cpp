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
    
    Food f1("dosa",1),f2("maggi",2),f3("coffee",4),f4("pizza",3);
        set<Food>s;
        s.insert(f1);
        s.insert(f2);
        s.insert(f3);
        s.insert(f4);
        for(auto x:s)
        {
            cout<<x.fname<<" "<<x.id<<endl;
        }

    return 0;
} 
