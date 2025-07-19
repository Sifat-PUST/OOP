#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<graphics.h>
using namespace std;
class player
{
public :
    string name;
    int dice,score=0;
    void play()
    {
        cout<<name<<" Roll The Dice"<<endl;
        system("pause");
        dice=rand()%6+1;
        cout<<"DICE IS :"<<dice<<endl;
        score+=dice;
        if(score>56)
            score-=dice;
        else if(score==56)
        {
            Beep(200,200);
            cout<<":::::::::::"<<name<<"::::::::::: have won the Game......."<<endl;
        }
        cout<<"Score Is :"<<score<<"\n\n"<<endl;
    }
    void open()
    {
        cout<<name<<" Roll The Dice"<<endl;
        system("pause");
        dice=rand()%6+1;
        if(dice==6)
        {
            cout<<"Dice Is :"<<dice<<endl;
            play();
        }
        else
            cout<<"Dice Is :"<<dice<<endl;
    }
};
int main()
{
    srand(time(0));
    player p1,p2;
    cout<<"Enter 1st Player Name:";
    cin>>p1.name;
    cout<<"Enter 2nd Player Name:";
    cin>>p2.name;
    cout<<"\n\n"<<endl;
    while(1)
    {
        p1.open();
        p2.open();
    }
    getch();
}
