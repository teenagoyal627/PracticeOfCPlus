#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;
    cout<<"The value of a and b is  "<<a <<" and "<<b<<endl;
    a=a+10;
    cout<<"The value of a and b is  "<<a<<" and "<<b<<endl;
       b=b+10;
    cout<<"The value of a and b is  "<<a<<" and "<<b<<endl;
return 0;
}
