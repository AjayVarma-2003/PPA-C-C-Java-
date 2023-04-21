#include <iostream>
using namespace std;

class Demo
{
    public:
        int A,B;            //Non Static Characteristics
        static int X,Y;     //Static Characteristics

        Demo()              //Default constructor
        {
            //initialisation of non static characteristics
            A=0;
            B=0;
        }
        void fun()          //void fun(Demo *this)
        {
            cout<<"inside non static function fun..."<<"\n";
            cout<<"Value of A :"<<this->A<<"\n";
            cout<<"Value of B :"<<this->B<<"\n";
            cout<<"Value of X :"<<X<<"\n";
            cout<<"Value of Y :"<<Y<<"\n";
        }
        static void gun()   //static void gun()
        {
            cout<<"inside static function gun..."<<"\n";
            cout<<"Value of X :"<<X<<"\n";
            cout<<"Value of Y :"<<Y<<"\n";
        }
};
//intialisation of static characteristics
int Demo::X=10;
int Demo::Y=20;

int main()
{
    Demo::gun();
    Demo obj;

    obj.fun();      //fun(&obj)
    obj.gun();      //Acoid this plsss  

    return 0;
}