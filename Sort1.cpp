#include<iostream>
using namespace std;
class student
{
    int i,j;
public:
    student()
    {

    }
    student(int x,int y)
    {
        i=x;
        j=y;
    }
    void show()
    {
        cout<<i <<" "<<j<<endl;
    }
    int get_i()
    {
        return i;
    }
};
void sort(student ar[],int x)
{
    student temp;
    for(int i=0;i<x-1;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(ar[j].get_i()<ar[j+1].get_i())
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
    student ar[3]={student(35,85),student(45,75),student(55,65)};
    cout<<" Before SORT :"<<endl;
    for(int i=0;i<3;i++)
    ar[i].show();
    sort(ar,3);
    cout<<" After SORT :"<<endl;
    for(int i=0;i<3;i++)
    ar[i].show();

    return 0;
}
