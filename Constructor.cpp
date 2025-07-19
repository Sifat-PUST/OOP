#include<iostream>
#include<cstring>
using namespace std;
class mobile
{
    string name;
    int ram;
    int battery;
public:
    mobile(string x="Null",int y=0 ,int z=0)
    {
        name=x;
        ram=y;
        battery=z;
    }
    mobile(mobile &obj)
    {
        name=obj.name;
        ram=obj.ram;
        battery=obj.battery;
    }
    void getData()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Ram is:"<<ram<<endl;
        cout<<"Battery is:"<<battery<<endl;
        cout<<"\n"<<endl;
    }
};
int  main()
{
    mobile mob1,mob2("OPPO",8,4500),mob3(mob2);
    mob1.getData();
    mob2.getData();
    mob3.getData();
}
