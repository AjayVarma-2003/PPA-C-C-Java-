#include <stdio.h>

struct demo
{
    int no;
    struct demo *ptr;
}

int main()
{
    struct demo obj1;

    obj1.no=11;
    obj1.ptr=NULL;

    return 0;
}