#include <stdio.h>

struct Hello
{
    /* data */
    int no;
    int x;
    struct demo
    {
        int i;
        float f;
        //struct demo obj; //Not Allowed
    } dobj1 , dobj2;
};


int main()
{
    struct demo obj;  //Allowed
    struct Hello hobj;

    hobj.no=10;
    hobj.x=20;

    hobj.dobj1.i=30;
    hobj.dobj1.f=40.0;

    hobj.dobj2,i=50;
    hobj.dobj2.f=50.0;

    return 0;
}