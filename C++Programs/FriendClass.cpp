#include<iostream>
using namespace std;
class Apple
{
    int a,b;
    public:
    void set(){
    cout<<"Enter the values of a and b ";
    cin>>a>>b;
    }
   friend class Banana;
};
class Banana
{
    public:
    void get( Apple m)

    { int c;
        c=m.a+m.b;
     cout<<c;
       
    }
};
int main()
{
    Apple x;
    x.set();
    Banana y;
    y.get(x);
}