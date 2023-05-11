#include<iostream>
using namespace std;

class base
{
    public:
    virtual~base()
    {
        cout<<"base class is destoyed";
    }
};
class derived:public base
{
    public:
    ~derived()
    {
        cout<<"derived calss is destroyed"<<endl;
    }
};
int main()
{
    base *b=new derived();
    delete b;

}