#include<iostream>
using namespace std;
class player
{
private:
    int age, run;
public:
    player(int x=20,int y=0)
    {
        age=x;
        run=y;
    }
    int get_age()
    {
        return age;
    }
    void show()
    {
        cout<<age<<"  "<<run<<endl;
    }

};
void sortobj(player p[],int x)
{
    player temp;
    for(int i=0;i<x-1;i++)
    {
        for(int j=0;j<x-1-i;j++)
        {
            if(p[j].get_age()<p[j+1].get_age())
                {
                    temp=p[j];
                    p[j]=p[j+1];
                    p[j+1]=temp;
                }
            else;
        }
    }
}
int main()
{
    player p[3]={{15,50},{20,35},{18,70}};
    for(int i=0;i<3;i++)
        p[i].show();
        sortobj(p,3);
    cout<<"After sorting:"<<endl;
    for(int i=0;i<3;i++)
        p[i].show();

}
