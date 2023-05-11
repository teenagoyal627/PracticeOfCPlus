#include<iostream>
using namespace std;
class Apple
{
    public:
    void set()
    {
        cout<<"this is function of apple class " <<"\n";
    }
};
class Banana : public Apple
{
   public:
   void display()
   {
    cout<<"\n"<<"This is function of banana class";
   }
};
int  main()
{
    Banana obj;
    obj.display();
        obj.set();

    return 0;
}
