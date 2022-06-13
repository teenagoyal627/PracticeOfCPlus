#include<iostream>
using namespace std;
class Account
{
    private:
    int balance;  
    
     //instance member variables because it gives memory when we make object
    static float roi;  //class member variable or static memner variable
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    void show_data()
    {
        cout<<balance;
    }
    static void set_roi(float r)//static member function //if we want to call roi with the help of object the we cannot use static only we decalre here(void set_roi(float r))
    {     //if we wnat to call it with the help of class name not object than we use static
        roi=r;
    }
};
    float Account::roi = 3.2f;



int main()
{
    Account a1;
    a1.set_balance(4);
    a1.show_data();
    //roi can be call with static class name or with object
    a1.set_roi(4.5);//with object
    Account::set_roi(3.7);

    return 0;
}