#include<iostream>
#include<string.h>
using namespace std;

class  cricket
{
 public:
    int run,score=0;
    static int ball;

    void data_show()
       {
        while(ball<12)
        {
        ball++;
        cin>>run;
        if(run==5)
        {
        run=1;
            cout<<"Wide"<<endl;
            ball--;
        }
        else if(run==7)
        {
            run=1;
            cout<<" No Ball "<<endl;
            ball--;

        }
        else if(run==8)
        {
            cout<<"out"<<endl;
            break;
        }
        else;
        score+=run;
        }
        getData();
    }
    void setBall()
    {
        if(ball==12)
            ball=0;
    }
    int getData()
    {
        return score;
    }

};
int cricket:: ball=0;

int main()
{
    cricket Team1[11],Team2[11];
    int a=0,b=0;
    for(int i=0;i<11;i++)
    {
        Team1[i].data_show();
        cout<<"Socre:"<<Team1[i].getData()<<endl;
    }
    for(int i=0;i<11;i++)
    {
        a+=Team1[i].getData();
    }
    cout<<"Team 1 Total Run:"<<a<<endl;


    Team2[1].setBall();

    for(int i=0;i<11;i++)
    {
        Team2[i].data_show();
        cout<<"Socre:"<<Team2[i].getData()<<endl;
    }
    for(int i=0;i<11;i++)
    {
        b+=Team2[i].getData();
    }
    cout<<"Team 2 Total Run:"<<b<<endl;
    if(a>b)
        cout<<"*Congratulations*"<<endl<<"    Team 1 Win "<<endl;
    else if(a<b)
        cout<<"*Congratulations*"<<endl<<"    Team 2 Win "<<endl;
    else
        cout<<"     Match Draw "<<endl;

}
