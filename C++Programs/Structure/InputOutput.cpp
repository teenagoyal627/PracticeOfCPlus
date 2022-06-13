#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
//#include<iostream>
//using namespace std;
int main()
{
    book b1={100,"teena",200.0};
    cout<< "book b1" ; 
    

//this is global declaration of structure 
//now i make local declaration of structure
//in c++ ,when we call a structure in main then it is not compulsory that we write struct keyword 


book b2;
b2.bookid =190;
strcpy(b2.title,"teena");
b2.price=12;
return 0;
}