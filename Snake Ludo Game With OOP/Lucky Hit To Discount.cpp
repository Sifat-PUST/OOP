#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
    srand(time(0));
    int discout,Fin;
    discout=20+rand()%(50-20);
    //cout<<"Discout is :"<<discout<<"%"<<endl;
    //cout<<"Discout is :"<<20+rand()%(50-20)<<endl;
    //cout<<"Discout is :"<<20+rand()%(50-20)<<endl;
    if(discout>(50-2))
    {
        cout<<"Your Hit Is : "<<discout<<endl;
        cout<<"But You Have to pay 2% money to The website creator From Total Amount"<<endl;
        cout<<"So ,Your Final Discout is "<<discout-2<<"%"<<endl;
        cout<<"\n Final Amount  IS : "<<2000*discout/100<<endl;
    }
    else
    {
         cout<<"Your Hit Is : "<<discout<<"%"<<endl;
          cout<<"\n Final Amount  IS : "<<2000*discout/100<<endl;
    }

    getch();
}
