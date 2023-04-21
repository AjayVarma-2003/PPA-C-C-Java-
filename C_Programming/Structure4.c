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
    struct Demo * ptr = &obj1;

    obj1.i = 11;   // . Direct Member access operator
    ptr->j=51;     //-> Indirect member access operator

    //Accessing obj valuers using pointer that is indirect access
    printf("%d\n",ptr->i);   
    printf("%f\n",ptr->f);
    printf("%f\n",ptr->d);
    printf("%d\n",ptr->j);    //Get Value by indirect access oprrator

    return 0;
}