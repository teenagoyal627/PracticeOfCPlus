#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    public:
   /* complex()
    {
        cout<<"Hello Teena"<<"\n"<<"\n";
    }*/
    complex(int x,int y)
    {
        a=x;
        b=y;  
        cout<<a<<"   "<<b;  }
     complex (int k)
     {
         a=k;
         cout<<"\n"<<a;
     }
     complex(complex &c)
     {
         a=c.a;
         b=c.b;
         cout<<"\n"<<a<<"  "<<b;
     }

};

int main()
{
    complex c2(3,5),c3(7);
    complex c4(c2);
    
}