#include<stdio.h>

void Demo()
{
    static int No = 10;
    No++;    //increments value of No by 1 every time it runs

    printf("%d\n",No);
}

int main()
{
    Demo();   //11
    Demo();   //12
    Demo();   //13

    return 0;
}