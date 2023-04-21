#include <iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()   //default constructor
        {
            cout<<"Inside default constructor\n";
            No1=0;
            No2=0;
        }

         Demo(int A , int B)   //parameterised constructor
        {
            cout<<"Inside parameterised constructor\n";
            No1=A;
            No2=B;
        }

        Demo (Demo &ref)    //copy constructor
        {
            cout<<"Inside copy constructor...\n";
            No1=ref.No1;
            No2=ref.No2;

        }

        ~Demo()
        {
            cout<<"Inside Destructor...\n";
        }

        void fun()
        {
            cout<<"Inside Fun...\n";
        }

        void gun()
        {
            cout<<"Inside Gun...\n";
        }
};

int main()
{
    Demo obj;

    cout<<"Value of No1 from obj :"<<obj.No1<<"\n";
    cout<<"Value of No2 from obj :"<<obj.No2<<"\n";

    Demo obj1(11,21);  //parameterised constructor

    cout<<"Value No1 from obj1 :"<<obj1.No1<<"\n";
    cout<<"Value No2 from obj1 :"<<obj1.No2<<"\n";

    Demo obj2(obj1);
    cout<<"Value No1 from obj2 :"<<obj2.No1<<"\n";
    cout<<"Value No2 from obj2 :"<<obj2.No2<<"\n";

    return 0;
}