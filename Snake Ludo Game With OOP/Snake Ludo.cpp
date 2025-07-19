#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<graphics.h>
using namespace std;
int main()
{
      srand(time(NULL))  ;
      system("pause");
      cout<<""<<endl;
    while(1)
    {
      int random=rand()%6+1;
      cout<<"Dice is :"<<random<<endl;
      if(random==1)
      {      Beep(2000,1500);
          cout<<"YeSSSSSS!!!Now You're able to Run!!!"<<endl;
          cout<<" "<<endl;
          system("pause");
          int sum=1;
          while(1)
          {
              int again$random=rand()%6+1;
              int previous_sum=sum;
              sum+=again$random;
              cout<<" "<<endl<<"Dice Is :"<<again$random<<endl;
              //Increasin' Ladder Condition!!!
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
             else if(sum>100)
             {
                 sum-=again$random;
             }
               else if(sum==100)
             {
                cout<<"Hurray !!! You Have WOn the Game."<<endl;
                 Beep(2000,2000);



                 break;
             }
              cout<<"Point :"<<previous_sum<<"+"<<again$random<<"\nScore ="<<sum<<endl;
              Beep(200,100);
              system("pause");
          }
      }
       system("pause");
       Beep(20,10);
    }

    getch();
}
