//enum is a keyword which is used to defined the groups of eleements and the elements are separated by commas.
//enum makes the code less complex and easy to maintain

#include<iostream>
using namespace std;

enum week
{
    monday,
    tuesday,
    wednesday
};

int main()
{
    week day;
    day=monday;
    cout<<day<<endl;
    day =tuesday;
    cout<<day;

}