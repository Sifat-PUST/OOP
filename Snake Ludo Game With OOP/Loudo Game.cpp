#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<conio.h>
//#include<windows.h>
#include<graphics.h>
//#include<random>
//#include<SFML/Graphics.hpp>
using namespace std;

int main()
{   int random, sum=0,a=20;
  srand(time(0));
    while(1)
    {



        random =time(0)%6+1;

        cout<<random<<endl;

         sum+=random;
       cout<<"Score :"<<sum<<endl;
       if(sum>=57)
        cout<<"You Win"<<endl;

        system("pause");
        Beep(a,50);
         /*Beep(270,1000);
          Beep(300,1000);
          Beep(320,1000);
          Beep(310,1000);
          Beep(400,1000);
          Beep(450,1000);
          Beep(240,1000);
          */
       a+=20;
       cout<<"a Is: "<<a<<endl;
             cout<<time(0)<<endl;

    }

    return 0;
}
