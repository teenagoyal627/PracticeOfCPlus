#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void input(){
        cout<<"enter bookid,title,price";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<bookid<<" "<<title<<" "<<price;
    }

};
int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}