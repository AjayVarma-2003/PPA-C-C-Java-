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
    struct Demo obj1 = {11,11.11,98.28,12};

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%f\n",obj1.d);
    printf("%d\n",obj1.j);

    return 0;
}