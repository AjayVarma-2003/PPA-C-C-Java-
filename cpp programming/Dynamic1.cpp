#include <iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            cout<<"Inside default constructor..."<<"\n";
        }
        Demo(int i, int j)
        {
            cout<<"Inside parameterised constructor..."<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside destructor..."<<"\n";
        }
};

int main()
{
cout<<"Inside Main..."<<"\n";

    Demo obj1;                  //Static memory allocation
    Demo obj2(11,21);           //Static memory allocation

    Demo *p = new Demo();           //Dynamic memory allocation
    Demo *q = new Demo(11,21);      //Dynamic memory allocation

    delete p;
    delete q;

    cout<<"End of main..."<<"\n";

    return 0;
}