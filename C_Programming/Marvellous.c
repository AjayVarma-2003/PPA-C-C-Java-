#include <stdio.h>
#include "PPA.h"      //including header file created seprately
                     //in which we have declared some definitions 

int main()
{
    struct Demo obj;
    printf("Inside Main : \n");
    printf("Rate of intrest is %f\n",ROI);
    printf("Fees of Logic Building Batch :%d\n",FEES);
    printf("Size of demo structure : %d\n",sizeof(obj));

    return 0;
}


//  1       #include<_____.h>       -> Inbuilt header files

//  2       #include "_____.h"      -> Userdefined header files


#define MACRO_NAME  MACRO_VALUE  //this is how we define macros

//Examples

#define MAX 90
#define DOZEN 12
#define SHEKADA 100
#define PI 3.14