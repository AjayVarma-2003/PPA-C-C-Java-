#include<stdio.h>

// typedef Old_Name New_Name ;

typedef const int CINT;    //type definition

typedef unsigned int UINT;  //type definition

int main()
{
    const int no = 11;
    CINT i = 11;

    unsigned int X = 21;
    UINT Y = 21;
    
    return 0;
}