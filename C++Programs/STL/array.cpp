#include<iostream>

#include<array>
using namespace std;
int main()
{
    array<int,5>a1={1,2,3,4,5};
    array<int,5>a2={11,22,33,44,55};
    cout<<"1."<<a1.at(3)<<endl;
    cout<<"2."<<a1[3]<<"\n";
    cout<<"3."<<a1.back()<<"\n";
        cout<<"4."<<a1.front()<<"\n";
        cout<<"5.";
        a1.fill(3);
        int i;
        for (i=0;i<5;i++)
      {
        cout<<a1[i] <<" ";

      }
      cout<<endl<<"6.";
      a1.swap(a2);
      for (i=0;i<5;i++)
      {
      cout<<a1[i];
      }
      cout<<endl;
      for(i=0;i<5;i++)
      {
        cout<<a2[i];
      }
      cout<<"\n";
    return 0;
}