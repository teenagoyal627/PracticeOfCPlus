#include<stdio.h>
#include<iostream>
using namespace std;
class name
{
    private:
    int a=3;
    public:
    void hello()
    { 
        int b=10;
        printf("%d\n",b);
    }
};
int main(){
name n;
n.hello();
// n.a; this not bi run because a variable is private not public means only private me a hi usko access kr sakta h
return 0;
}
