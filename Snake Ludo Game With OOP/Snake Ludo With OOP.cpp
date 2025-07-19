#include<iostream>
#include<conio.h>
#include<ctime>
#include<graphics.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
class player
{
public :
    int score,sum=1,tdice,fscore;
    int dice=rand()%6+1;
    string name;
   int random()
   {
      dice=rand()%6+1;
      tdice=dice;
      cout<<"Rolled Dice is :"<<dice<<endl;
      sum+=dice;
       if(sum==6)
            {
                cout<<"WoW! You're in \"Ladder\" From 6 To 16"<<endl;
                sum=16;
                 Beep(2000,126);
            }
             if(sum==8)
            {
                cout<<"WoW! You're in \"Ladder\" From 8 To 41"<<endl;
                sum=41;
                Beep(2000,110);
            }
             if(sum==26)
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
             if(sum==55)
            {
                cout<<"WoW! You're in \"Ladder\" From 55 To 80"<<endl;
                sum=80;
                 Beep(1945,113);
            }
             if(sum==59)
            {
                cout<<"WoW! You're in \"Ladder\" From 59 To 84"<<endl;
                sum=84;
                Beep(1900,117);
            }
            //Decreasin' "Snake Mouth" condition!!!
             if(sum==32)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 32 To 13"<<endl;
                sum=13;
               Beep(2001,110);
            }
            if(sum==60)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 60 To 38"<<endl;
                sum=38;
                Beep(2102,120);
            }
            if(sum==63)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 63 To 3"<<endl;
                sum=3;
               Beep(2000,116);
            }
            if(sum==70)
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
            if(sum==82)
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
            if(sum==97)
            {
                cout<<"Oops! You're in \"Snake Mouth\" From 97 To 12"<<endl;
                sum=12;
                Beep(1969,110);
            }
            if(sum>100)
            {
                sum-=dice;
            }
            if(sum==100)
            {
                cout<<name<<":::::"<<endl;
                cout<<"*********** Hurray!!! I'm Win . ***********"<<endl;
                Beep(2000,2000);
                fscore=100;
            }
            cout<<"Score is :"<<sum<<endl;


   }
};
int main()
{
    srand(time(0));
    int f1,f2;
    player p1,p2,p3,p4;
    //string name1,name2;
    cout<<"Enter First Player Name :";
    cin>>p1.name;
    cout<<"Enter Second Player Name :";
    cin>>p2.name;
    cout<<"\n\n"<<endl;
    cout<<p1.name<<" Roll The Dice."<<endl;
    system("pause");
    if(p1.dice==1)
    {
         f1=1;
         Beep(250,250);
         cout<<p1.name<<"'s ROLLed Dice Is :"<<f1<<endl;
         cout<<"Now \""<<p1.name<<"\" is Able to Run \n\n"<<endl;
    }
    else
         cout<<p1.name <<" Rolled Dice is :"<<p1.dice<<"\n\n"<<endl;
    cout<<p2.name<<" Roll The Dice."<<endl;
    system("pause");
    if(p2.dice==1)
    {
         f2=1;
         Beep(250,250);
         cout<<p2.name<<" ROLLed Dice Is :"<<f2<<endl;
         cout<<"Now \""<<p2.name<<"\" is Able to Run \n\n"<<endl;
    }
    else
        cout<<p2.name <<" Rolled Dice is :"<<p2.dice<<"\n\n"<<endl;
    //cout<<"\n\n\n"<<endl;
    while(1)
    {
      if(p1.fscore!=100)
      {
        if(f1==1)
        {
         cout<<"\n::::::*"<<p1.name<<"*:::::: Roll The Dice."<<endl;
         system("pause");
         p1.random();
         cout<<""<<endl;
         if(p1.tdice==6)
           {
               Beep(360,200);
               cout<<"#####___"<<p1.name<<"___##### You Have Another Chance To Roll The Dice"<<endl;
               system("pause");
               p1.random();
           }
         else;
        }
        else
        {
         cout<<p1.name<<" Roll The Dice ."<<endl;
         system("pause");
         p1.dice=rand()%6+1;
         if(p1.dice==1)
          {
            f1=1;
            Beep(250,250);
            cout<<"Before Enter the  function Dice is :"<<f1<<endl;
            cout<<"Now \""<<p1.name<<"\" is Able to Run \n\n"<<endl;
          }
          else
           cout<<p1.name <<"'s Rolled Dice is :"<<p1.dice<<"\n"<<endl;
        }
        cout<<"\n\n"<<endl;
      }
      else
      {
          Beep(250,250);
          cout<<":::::::: "<<p1.name<<" :::::::: Have Already Won The Game......."<<endl;
      }
      if(p2.fscore!=100)
      {
          if(f2==1)
        {
         cout<<"\n::::::*"<<p2.name<<"*:::::: Roll The Dice."<<endl;
         system("pause");
         p2.random();
         cout<<""<<endl;
         if(p2.tdice==6)
           {
               Beep(360,200);
               cout<<"#####___"<<p2.name<<"___##### You Have Another Chance To Roll The Dice"<<endl;
               system("pause");
               p2.random();
           }
         else;
        }
     else
        {
         cout<<p2.name<<" Roll The Dice ."<<endl;
         system("pause");
         p2.dice=rand()%6+1;
         if(p2.dice==1)
          {
            f2=1;
            Beep(250,250);
            cout<<"Before Enter The Function Dice :"<<f2<<endl;
            cout<<"Now \""<<p2.name<<"\" is Able to Run \n\n"<<endl;
          }
          else
             cout<<p2.name <<"'s Rolled Dice is :"<<p2.dice<<endl;
        }
      }
      else
      {
          Beep(272,40);
          cout<<":::::::: "<<p2.name<<" :::::::: Have Already Won The Game.........."<<endl;
      }
        cout<<"\n\n"<<endl;
       // cout<<"\n\n\nsum Is :"<<p1.sum<<"\n\n\n"<<endl;
       if(p1.fscore==100&&p2.fscore==100)
       {
           cout<<"%%%%%%%%%%%%%%%%% The Game Is Over!!! %%%%%%%%%%%%%%%%%%%"<<endl;
           break;
       }

    }
    getch();
}
