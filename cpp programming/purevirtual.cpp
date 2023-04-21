#include <iostream>
using namespace std;

class Base 
{
    public:
        int A,B;

        int addition()
        {
            return A+B;
        }

        virtual int substraction()
        {
            return A-B;
        }
        virtual int multiplication();
};

class Derived : public Base
{
    
};

int main()
{

    return 0;
}