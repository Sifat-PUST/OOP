#include<iostream>
using namespace std;
class student
{
    public:
       char name[100];
       int roll;
       float gpa;

       void input()
       {
           cin>>name>>roll>>gpa;
       }
       void display()
       {
           cout<<name<<"      "<<roll<<"     "<<gpa<<endl;
       }
       student()
       {
           cin>>name>>roll>>gpa;
       }
};
int main()
{
    student jui;
    jui.input();
    jui.roll=102;
    jui.display();
    cout<<jui.roll<<endl;

    student sifat;
    sifat.display();
}
