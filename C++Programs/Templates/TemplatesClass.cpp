//Templates is the frame which define its actual memory in a c++ program.there are two types of templates in c++ 1.class templates and 2.funciton templates
#include<iostream>
using namespace std;

template<typename T>
class show
{

    public:
    show(T p,T q)
    {
        cout<<"a="<<p<<"b="<<q;

    }
   
};
int main()
{
    show <int> ob(10,20);
    show <char> ob1('a','b');

    return 0;
}


