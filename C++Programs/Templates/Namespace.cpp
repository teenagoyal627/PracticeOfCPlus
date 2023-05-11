#include<iostream>
    using namespace std;

    namespace sample1
    {
        int a=10;
        void show(){
            cout<<"teena"<<endl;

        }

    }
    namespace sample2
    {
        int a=40;
        void show2(){
            cout<<"goyal"<<endl;
        }
    }
    int a=90;
    int main()
    {
        cout<<a<<endl;
        cout<<sample1::a<<endl;
        sample1::show();
        
       cout<<sample2::a<<endl;
        sample2::show2();
    }