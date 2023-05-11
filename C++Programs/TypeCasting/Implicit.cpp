// the implicit typecasting is the typecasting in which the compiler automatically convert the type of the variable
// in this type casting we convert the small datatype into large datatype

#include <iostream>
using namespace std;

class abc
{
public:
    void show()
    {
        int x=10;
        float y=(float)x;
        cout<<y;

    }
};
int main()
{
    abc a;
    a.show();

    return 0;
}