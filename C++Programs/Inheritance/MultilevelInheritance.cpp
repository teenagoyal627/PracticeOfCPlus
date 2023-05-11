#include<iostream>
using namespace std;
class A
{
    public:
    void set()
    {
        cout<<"this is function of A class " <<"\n";
    }
};
class B : public A
{
   public:
   void display()
   {
    cout<<"This is function of B class"<<"\n";
   }
};
class C:public B
{
    public:
    void sum()
{
    int a,b,c;
        cout<<"\n"<<"\nenter the values of a and b";
      cin>>a>>b;
      c=a+b;
      cout<<"the sum of a and b is "<<c;

    }
};
int  main()
{   
     C o2;
//this is not required to write because in this c is inheritant from b and b is ingeritant from a so first class a run than b than c
     B o1;
     o1.set();
    o2.display();
    o2.sum();
    

    return 0;
}
