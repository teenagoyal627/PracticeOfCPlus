#include<iostream>
using namespace std;
class Apple
{
    int a,b;
    public:
        void set()
        {
            cout<<"Enter the values of a and b  ";
            cin>>a>>b;
        }

    friend int add(Apple x);
};
 int add(Apple x)
 {
     int c;
     c=x.a+x.b;
     cout<<"Sum of two numbers are  "<<c;
     return 0;
 }
 int main()
 {
    Apple z;
    z.set();
    add(z);
    return 0;
 }