#include<stdio.h>
#include<iostream>
using namespace std;
class ABC{
private:
int b=19;
public:
void show(){
   int a=3;
    printf("%d",a);
}
};
int main()
{
    ABC s1;
    //s1.show();
    printf("\n%ld\n",sizeof(s1));

}

