#include <stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
    int j;
}obj1 , obj2;

int main()
{
    obj1.i=11;
    obj1.f=11.11;
    obj1.d=89.89;
    obj1.j=12;

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%f\n",obj1.d);
    printf("%d\n",obj1.j);


    return 0;
}