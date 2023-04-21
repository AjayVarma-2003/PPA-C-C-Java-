#include <stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
    int j;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.i=11;
    obj1.f=11.11;
    obj1.d=89.89;
    obj1.j=12;

    obj2.i=13;
    obj2.f=12.22;
    obj2.d=99.99;
    obj2.j=14;

    //Direct accessing member values
    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%f\n",obj1.d);
    printf("%d\n",obj1.j);

    printf("%d\n",obj2.i);
    printf("%f\n",obj2.f);
    printf("%f\n",obj2.d);
    printf("%d\n",obj2.j);
    
    return 0;
}