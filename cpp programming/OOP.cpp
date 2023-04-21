#include <iostream>

using namespace std;

class Demo
{
    public:
     int No1=10;
     int No2=11;

     void fun()
     {
        cout<<"Inside Fun...\n";
     }
};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"Size of object : "<<sizeof(obj1)<<"\n";
    obj1.No1=10;
    obj1.No2=20;

    obj2.No1=30;
    obj2.No2=40;

    obj2.fun();    //fun not naked function so call it with its class

    cout<<obj1.No2<<"\n";
    

    return 0;
}