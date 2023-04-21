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
};
//intialisation of static characteristics
int Demo::X=10;
int Demo::Y=20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj;
    Demo obj1;

    obj1.A++;

    cout<<"Value of A from obj1 is : "<<obj1.A<<"\n";

    cout<<"Size of Demo class object is "<<sizeof(obj)<<"\n";

    return 0;
}