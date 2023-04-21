#include <stdio.h>

int main()
{
    int No=0;

    printf("Enter the number :\n");
    scanf("%d",&No);

    if((No % 2)==0)
    {
        printf("It is the even number...\n");
    }
    else{
        printf("It is odd number...\n");
    }

    return 0;
}