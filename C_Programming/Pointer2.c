#include <stdio.h>

int main()
{
    int No = 11;

    int *p = &No;

    int **q = &p;

    int ***r = &q;

    int ****a = &r;


    return 0;
}


/*

sizeof(No);     // 4
&No;             // 100 for example
&a;             // 500 for example
sizeof(r);      // 8 
sizeof(c);      // 8
sizeof(*p);      // 4
&q              // 300 for example
&c;             // 700 for example
*p              // 11
**q             // 11
****b;          // 100
******c;        // 11
**c;            // 400 showing address of 2 level up pointer


*/