#include<iostream>
#include<windows.h>
using namespace std;
class employe
{
private:
    int salary;
    int total,x,y,z;
    void cal_salary()
    {
        total=salary+salary*0.25+salary*0.15+salary*0.20;
    }
public:
    int dd,mm,yy,nd,nm,ny;
    void set_salary(int x)
    {
        salary=x;
        //cin>>salary;
    }
    int get_salary()
    {
        return salary;
    }
    int get_total_salary()
    {
        cal_salary();
        return total;
    }
    void cal_Age()
    {
        if(x>dd)
            nd=x-dd;
        else
        {
            y--;
            nd=x+31-dd;
        }
        if(y>mm)
            nm=y-mm;
        else
        {
            z--;
            nm=y+12-mm;
        }
        ny=z-yy;

    cout<<"Age is :"<<ny<<" Year "<<nm<<" Month "<<nd<<" Day"<<endl;
    }
    employe(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
        cout<<"current Time is :"<<x<<y<<z<<endl;
    }
};
int main()
{
    SYSTEMTIME t;
    GetSystemTime(&t);
    employe e1(t.wDay,t.wMonth,t.wYear);
    e1.set_salary(5000);
    cout<<"Basic salary :"<<e1.get_salary()<<endl;
    cout<<"Total salary :"<<e1.get_total_salary()<<endl;
    cout<<"Enter Birthday(DD/MM/YY) :";
    cin>>e1.dd>>e1.mm>>e1.yy;
    e1.cal_Age();

    //cout<<"Age is :"<<e1.ny<<" Year "<<e1.nm<<" Month "<<e1.nd<<" Day"<<endl;
}
