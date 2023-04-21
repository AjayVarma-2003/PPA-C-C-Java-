#include <stdio.h>

extern int A;      //imported from GlobalStatic2
extern int B;     //imported from GlobalStatic2 and will get error here cause B is statically declared there
// which can not be extern 

int main()
{
    printf("%d\n",A);
    printf("%d\n",B);

    return 0;
}