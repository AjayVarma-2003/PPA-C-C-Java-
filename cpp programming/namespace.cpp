#include <iostream>
using namespcae std;

namespace Marvellous
{
    class Demo 
    {
        public:
            int A;
            int B;

            Demo (int i=10,int j=20)
            {
                A=i;
                B=j;
            }
    };
}

using namespace Marvellous;

int main()
{
    //Marvellous::Demo obj;
    Demo obj;

    cout<<"Inside main : "<<"\n";

    return 0;
}