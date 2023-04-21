#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arr[10];     //static memory allocation
    
    int size = 0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    //step 1 = Allocate the memory
    ptr = (int *)malloc(sizeof(int) * size);    //This pointer indicate dynamically allocated memory address

    //step 2 =Use memory

    //step 3 = free memory
    free(ptr);

    return 0;
}