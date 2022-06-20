#include<iostream>

#include<tuple>

using namespace std;
int main()
{
    //int make;
    tuple<string,int>t1;
    tuple<string,string>t2;
    tuple<string,float>t3;
    t1=make-tuple("Teena",16);
    t2=make-tuple("Rahul","Reena");
    t3=make-tuple("yashi",3.4);
    cout<<"pair 1";
    cout<<get<1>(t1);
    cout<<get<0>(t2);
    cout<<get<1>(t3);
    return 0;
}