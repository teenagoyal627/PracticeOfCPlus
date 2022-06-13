#include<iostream>
using namespace std;
//i want to add two complex number 
class complex
{
    private:
    int a,b;   //instance member variables
    public:
    // all above are instance member function
   void set_data(int x ,int y)        //here i make set data function in the complex class
    { 
a=x;

b=y;
}
    void show_data()
    {
        cout<<a<<"\n"<<b;
    //now i am try to make set data function outside the class .......so.....
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        return (temp);
    }
};
    

int main()
{
    complex c1,c2,c3 ;//here c1 is object
    c1.set_data(3,4);
    c2.set_data(5,4);
    //c3=c1+c2;//here for addtion we cannot use direct + operator because operators is only for primitive data type not for complex
    c3=c1.add(c2);
    c3.show_data();
    return 0;
}
 

