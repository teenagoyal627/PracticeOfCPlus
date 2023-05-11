#include<iostream>
using namespace std;
void swap(int &,int &);

int main()
{

    int a,b;
    cout<<"Enter the values of a and b  "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"and "<<b;
return 0;
}
void swap(int &p,int &q)
{
    int t;
    t=p;
    p=q;
    q=t;


}