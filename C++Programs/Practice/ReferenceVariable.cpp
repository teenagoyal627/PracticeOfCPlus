#include<iostream>
using namespace std;
int main()
{
    int a=30;
    cout<<"The value of variable is  "<<a<<endl;
    cout<<"Now consider a reference variable which gives alternate name to existing variable :-  "<<endl;
    int &b=a;
    cout<<"The value of  existing variable is   "<< a <<" and the value of reference variable is   "<<b<<endl;
    cout<<"Now we try to change the value of reference variable then the value of existing variable is change automatically"<<endl;
    b++;
    cout<<"Changed values are  "<<a<<"and  "<<b<<endl;
    return 0;

}