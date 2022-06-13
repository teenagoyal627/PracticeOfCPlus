#include<iostream>
using namespace std;
//This is all about structure//
/*struct complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    { 
a=x;

b=y;
    }
    void show_data()
    {
        cout<<a<<"\n"<<b;
    }
} ;
int main()
{
    complex c1; //c1 is a variabl
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}*/
//now we understand about class
class complex
{
    private:
    int a,b;
    public:
   /* void set_data(intx ,int y) ;       //here i make set data function in the complex class

    { 
a=x;

b=y;
}*/
void set_data(int,int);
    
    void show_data()
    {
        cout<<a<<"\n"<<b;
    //now i am try to make set data function outside the class .......so.....
    }
};
    void complex::set_data(int x,int y )
{
a=x;
b=y;
}

int main()
{
    complex c1;//here c1 is object
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}
