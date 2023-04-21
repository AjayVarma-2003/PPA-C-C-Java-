#include <stdio.h>

int main()
{
    int Std=0;

    printf("Enter your standard : \n");
    scanf("%d",&Std);

    switch (Std)
    {
        case 1:
            printf("Your exam is at 1pm\n");
            break;

        case 2:
            printf("Your exam is at 2pm\n");
            break;

        case 3:
            printf("Your exam is at 3pm\n");
            break;  

        case 4:
            printf("Your exam is at 4pm\n");
            break; 

        default:
        printf("Invalid value entered....\n");
        break;
    }

    return 0;
}