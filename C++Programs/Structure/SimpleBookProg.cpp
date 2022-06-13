#include<iostream>
using namespace std;
struct book
{
    int bookid;               //these all are member variables
    char name[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1=input();
    display(b1);
    return 0;
}
void display(book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.name<<" "<<b.price;
    }
    book input()
    {
        book b;
        cout<<"Enter the bookid"<<" " <<"Enter the name "<<" " <<"Enter the price";
        cin>>b.bookid>>b.name>>b.price;
        return(b);
    }