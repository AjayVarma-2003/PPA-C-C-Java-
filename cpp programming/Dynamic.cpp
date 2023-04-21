#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int Arr[5];         //Static memory allocation

    int *p = NULL;
    p = (int *)malloc(5*sizeof(int));      //Dynamic memory allocation using malloc(C programming method)

    int *q = NULL;
    q = (int *)calloc(5,sizeof(int));      //Dynamic Memory allocation using calloc(C programming method)

    int *x = NULL;
    x = new int[5];

    free(p);                              //free the memory (c method)
    free(q);                              //free the memory (c method)

    delete [] x;                          //deleting initialised memory of x

    

    return 0;
}