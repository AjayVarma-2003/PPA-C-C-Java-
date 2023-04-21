#include <iostream>
using namespace std;

//constant function is such function  whcih cant change value of its caller object
class Demo 
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11),D(21)   //member intialisation list
        {
            A =0;
            B =0;
        }

        Demo(int i , int j , int k , int l) :C(k) , D(l)
        {
            A=i;
            B=j;
        }

        void fun()
        {
            A++;        //Allowed in obj and not allowed in obj1
            B++;        //Allowed in obj and not allowed in obj1
            //C++; this is not allowed and D++ also
            cout<<"Value of A after exicuting fun : "<<A<<"\n";
            cout<<"Value of B after exicuting gun : "<<B<<"\n";
        }

        void gun() const
        {
            /*
            this is not allowed in constant function
            A++;
            B++;
            C++;
            D++;
            */ 
        }
};

int main()
{
    Demo obj {11,21,22,23};
    const Demo obj1(10,12,14,15);

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";
    cout<<obj.C<<"\n";
    cout<<obj.D<<"\n";
    obj.fun();
    obj.gun();

    return 0;
}