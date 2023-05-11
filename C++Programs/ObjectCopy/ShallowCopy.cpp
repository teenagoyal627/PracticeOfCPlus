//object copy  means to create a copy of exitsitng object
//there are 2 ways of object copy 1.copy constructor 2.assignment operator

//There are 2 types of object copying 1.shallow copy 2.deep copy
//shallow copy is similar to copy constructor and assignment opertor

#include<iostream>
using namespace std;

class abc
{
    int a,b,c;
    public:
    abc()  //default constructor
    {
        a=10;
        cout<<"This is default construtor"<<a<<endl;
    }
     abc(int x,int y)  //parameterized constructor
    {
        a=x;
        b=y;
        c=a+b;
        cout<<c<<endl;
    }
    abc(int x)
    {
        a=x;
        cout<<a<<endl;
    }

    abc(abc &d)
    {
        a=d.a;
        b=d.b;
        cout<<"the values of copy constructor are"<<a<<"and"<<b<<endl;
    }
};
int main(){
    abc a,a1(3);
   abc a2=a1; //copy constructor
    abc a3;
    a3=a;//assignment operator
    cout<<endl;
    abc a4;
    a4=a3;

}

