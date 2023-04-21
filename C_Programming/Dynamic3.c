#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL;

    //step 1 = Allocate the memory
    //Allocated memory of 20 bytes
    ptr = (int *)malloc(sizeof(int) * 5);    //This pointer indicate dynamically allocated memory address

    //step 2 =Use memory

    //Increased size to 28 bytes
    ptr = (int *)realloc(ptr,sizeof(int)*7);  //28 bytes
    // ptr = (int *)realloc(ptr,sizeof(int)*3);  //12 bytes

    //step 3 = free memory
    free(ptr);

    return 0;
}