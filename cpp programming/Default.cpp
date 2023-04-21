#include <iostream>
using namespace std;

float Area(float radius , float PI = 3.14)
{
    float Ans = 0.0f;
    Ans = PI * radius * radius;
    return Ans;
}

int main()
{
    float r = 0.0f;

    cout<<"Enter Radius : "<<"\n";
    cin>>r;

    float fRet = 0.0f;

    fRet = Area(r);

    cout<<"Area of circle is : "<<fRet<<"\n";

    return 0;
}