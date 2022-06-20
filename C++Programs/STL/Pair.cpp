#include<iostream>
#include<string.h>
#include<pair>

using namespace std;
int main()
{
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    p1=make-pair("Teena",16);
    p2=make-pair("Rahul","Reena");
    p3=make-pair("yashi",3.4);
    cout<<"pair 1";
    cout<<p1.first<<" "<<p1.second;
    cout<<p2.first<" "<<p2.second;
    return 0;
}