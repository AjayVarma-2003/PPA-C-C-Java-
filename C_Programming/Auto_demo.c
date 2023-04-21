#include <stdio.h>

int Z=10;  //Global variable

int Y;

int main()
{
    int A=10;

    int B;

    auto int C=10;

    auto int D;
    
    printf("Normal Values of A and C %d\n",A ,C);
   
    printf("Auto/Random values stored in B and D %d\n",B,D);
    

    return 0;
}