#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int rollno; 
    char name[20];
    class address{   //nested class
        private:
        int h_no;
        char s_no[20];
        char city [20];
        char state[20];
        public:
        void set_address (int h,char *s,char *c,char *st)
        {
            h_no=h;
            strcpy(s_no,s);
            strcpy(city,c);
            strcpy(state,st);

        }
        void show_address()
        {
             cout<<h_no<<endl;
             cout<<s_no<<""<<city;
             cout<<state;
        }
              
  
  
    };
          address add;
          public:
          void set_rollno(int r)
          {
            rollno=r;

          }
           void set_name (char *n)
           {
            strcpy(name,n);
           }
            void set_address(int h,char *s,char *c ,char *st)
            {
                add.set_address(h,s,c,st);
            }
              void show_student ()
              {
                cout<<"student data "<<endl;
                cout<<rollno<<"";
                cout<<name<<"";
                add.show_address();
              }
};
int main()
{
    student s1;
    s1.set_rollno(23);
    s1.set_name("Teena");
    s1.set_address(123,"ramlilal","paota","rajasthan");
   s1.show_student();
    return 0;

}