#include<iostream>
    using namespace std;
template <typename T>
T show( T p,T q)
{
    return (p>q)?p:q;
   
}
int main()
{
    cout<<show<int>(3,1);
    cout<<show<char>('a','b');
}