#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    double cgpa;
public:
    student()
    {

    }
    student(string s,int r,double cg)
    {
        name=s;
        roll=r;
        cgpa=cg;
    }
    double get_cgpa()
    {
        return cgpa;
    }
    void show()
    {
        cout<<name<<"       "<<roll<<"  "<<cgpa<<endl;
    }
};
void sort(student ar[],int x)
{
    student temp;
    for(int i=0;i<x-1;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(ar[j].get_cgpa()>ar[j+1].get_cgpa())
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
}
int main()
{
   student ar[6]={student("sifat",200114,3.55),student("Pushpo",200117,3.79),student("jui",200115,3.99),student("Neyamot",200114,3.55),student("Faruk",200118,3.34),student("july",200111,3.44)};
    cout<<"++++++++++++++++Before SORT++++++++++++++++:"<<endl;
    for(int i=0;i<6;i++)
    ar[i].show();
    sort(ar,6);
    cout<<"---------------- After SORT ---------------:"<<endl;
    for(int i=0;i<6;i++)
    ar[i].show();
}
