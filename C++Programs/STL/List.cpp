#include<iostream>
#include<list>
using namespace std;
int main()
{
    
    list<int>l1{1,2,3};
    list <int>::iterator p =l1.begin();
    l1.push_back(10);
    l1.push_front(30);
    while(p!=l1.end())
    {
        cout<<" "<<*p;
        p++;
    }
    cout<<"\n"<<"Total values in list  "<<l1.size();
    cout<<"\n";
    return 0;
}