#include<iostream>
using namespace std;
class ABC
{
    public:
    int a;
    void set()
    {
        a=10;
        cout<<a;
    }
};
class pqr
{
    ABC x;
  public:
    void get()
    {
        x.set();
    }
};
int main()
{
    pqr v;
    v.get();
    
}