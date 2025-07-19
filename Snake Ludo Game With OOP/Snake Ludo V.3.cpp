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
    int score,fs;
    int dice,tdice,chack=6;//=rand()%6+1;
    int sum=1,F;
    void play()
    {
        int dice1=rand()%6+1;
        tdice=dice1;
        cout<<"Rolled Dice is :"<<dice1<<endl;
        sum+=dice1;
            if(sum==6)
            {
                cout<<"WoW! You're in \"Ladder\" From 6 To 16"<<endl;
                sum=16;
                 Beep(2000,126);
            }
            else if(sum==8)
            {
                cout<<"WoW! You're in \"Ladder\" From 8 To 41"<<endl;
                sum=41;
                Beep(2000,110);
            }
            else if(sum==26)
            {
                cout<<"WoW! You're in \"Ladder\" From 26 To 29"<<endl;
                sum=29;
                     Beep(1989,125);
            }
             if(sum==50)
            {
                cout<<"WoW! You're in \"Ladder\" From 50 To 93"<<endl;
                sum=93;
                 Beep(1967,124);
            }
            else if(sum==55)
            {
                cout<<"WoW! You're in \"Ladder\" From 55 To 80"<<endl;
                sum=80;
                 Beep(1945,113);
            }
            else if(sum==59)
            {
                cout<<"WoW! You're in \"Ladder\" From 59 To 84"<<endl;
                sum=84;
                Beep(1900,117);
            }
            //Decreasin' "Snake Mouth" condition!!!
            else if(sum==32)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 32 To 13"<<endl;
                sum=13;
               Beep(2001,110);
            }
            else if(sum==60)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 60 To 38"<<endl;
                sum=38;
                Beep(2102,120);
            }
           else if(sum==63)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 63 To 3"<<endl;
                sum=3;
               Beep(2000,116);
            }
           else if(sum==70)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 70 To 25"<<endl;
                sum=25;
                 Beep(2000,117);
            }
            if(sum==73)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 73 To 47"<<endl;
                sum=47;
                Beep(2002,122);
            }
           else if(sum==82)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 82 To 43"<<endl;
                sum=43;
                Beep(2000,113);
            }
            if(sum==89)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 89 To 53"<<endl;
                sum=53;
               Beep(1955,114);
            }
           else if(sum==97)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 97 To 12"<<endl;
                sum=12;
                Beep(1969,110);
            }
            else if(sum>100)
            {
                sum-=dice1;
            }
            else if(sum==100)
            {
                Beep(2000,1500);
                cout<<name<<"::::::::::"<<endl;
                cout<<"Hurray I'm Winner Of The Match..........."<<endl;
                fs=1;
            }
            cout<<"Score Is :$"<<sum<<endl;

    }
    void condition()
    {
        cout<<"\""<<name<<"\""<<" Roll The Dice......"<<endl;
        system("pause");
        dice=rand()%6+1;
        if(dice==1)
        {
           F=1;
           cout<<"Rolled Dice iS :"<<F<<endl;
           cout<<"Now \""<<name<<"\" is Able to Run...\n\n"<<endl;
        }
        else
            cout<<"Rolled Dice IS :"<<dice<<endl;
        cout<<"\n\n"<<endl;
    }
    void fcondition()
    {
       if(fs!=1)
       {
        if(F==1)
        {
            cout<<":::::::::::* "<<name<<" *::::::::::::"<<"Roll The Dice.."<<endl;
            system("pause");
            play();
            while(tdice==6)
            {
                cout<<"##########_____"<<name<<"_____########### You Have Another Chance To Roll The Dice.."<<endl;
                system("pause");
                play();
                chack+=tdice;
                if(chack>17)
                    break;
                else;
            }
            cout<<"\n\n"<<endl;
        }
        else
        {
           condition();
           cout<<"\n\n"<<endl;
        }
       }
       else
       {
           Beep(100,100);
           cout<<":::::::::::::::"<<name<<"::::::::::::::: Have Already Won The Game..\n\n"<<endl;
       }
    }
};
int main()
{
    srand(time(0));
    int player_no;
    cout<<"How Many Player  (2-4) :";
    cin>>player_no;
    if(player_no==2)
    {
    player p1,p2,p3,p4;
    cout<<"Enter 1st Player Name :";
    cin>>p1.name;
    cout<<"Enter 2nd Player Name :";
    cin>>p2.name;
    cout<<"\n\n"<<endl;
    p1.condition();
    p2.condition();
    while(1)
    {
        p1.fcondition();
        p2.fcondition();
        if(p1.fs==1&&p2.fs==1)
        {
            cout<<"%%%%%%%%%%%%%%%%%%%% Game Is Over!!! %%%%%%%%%%%%%%%%%%%%%"<<endl;
            break;
        }
    }
    }
    else if(player_no==3)
    {
    player p1,p2,p3,p4;
    cout<<"Enter 1st Player Name :";
    cin>>p1.name;
    cout<<"Enter 2nd Player Name :";
    cin>>p2.name;
    cout<<"Enter 3rd Player Name :";
    cin>>p3.name;
    cout<<"\n\n"<<endl;
    p1.condition();
    p2.condition();
    p3.condition();
    while(1)
    {
        p1.fcondition();
        p2.fcondition();
        p3.fcondition();
        if(p1.fs==1&&p2.fs==1&&p3.fs==1)
        {
            cout<<"%%%%%%%%%%%%%%%%%%%% Game Is Over!!! %%%%%%%%%%%%%%%%%%%%%"<<endl;
            break;
        }
    }
    }
    else
    {
    player p1,p2,p3,p4;
    cout<<"Enter 1st Player Name :";
    cin>>p1.name;
    cout<<"Enter 2nd Player Name :";
    cin>>p2.name;
    cout<<"Enter 3rd Player Name :";
    cin>>p3.name;
    cout<<"Enter 4th Player Name :";
    cin>>p4.name;
    cout<<"\n\n"<<endl;
    p1.condition();
    p2.condition();
    p3.condition();
    p4.condition();
    while(1)
    {
        p1.fcondition();
        p2.fcondition();
        p3.fcondition();
        p4.fcondition();
        if(p1.fs==1&&p2.fs==1&&p3.fs==1&&p4.fs==1)
        {
            cout<<"%%%%%%%%%%%%%%%%%%%% Game Is Over!!! %%%%%%%%%%%%%%%%%%%%%"<<endl;
            break;
        }
    }
    }

    getch();
}
