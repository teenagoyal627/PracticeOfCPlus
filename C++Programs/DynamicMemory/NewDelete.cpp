//the new keyword is used for dynamic memory allocation
//the syntax of new keyword is (pointer=new datatype)
#include<iostream>
using namespace std;

int main()
{
    int *p;
   p= new int;
    *p=10;
    cout<<"here the address of p is comes in the form of output"<<p<<endl;
    cout<<"here the value of p is comes"<<*p<<endl;
    cout<<"here is also address is come"<<&p;
    delete p;
    cout<<*p<<endl;
    cout<<"the value of p is deleted so never be comes as output"<<endl;

    int *r;
    r=new int[2];
    r[0]=10;
    r[1]=20;
    cout<<r[0]<<endl<<r[1]<<endl;
    delete [] r;
    cout<<"here garbage value of r[0] is come"<<r[0]<< "and r[1] is"<<r[1]<<endl;
    cout<<"the values of array are deleted this is the statement which is after the deleting of array values";
    return 0;
}

