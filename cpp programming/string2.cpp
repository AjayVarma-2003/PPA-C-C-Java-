#include <iostream>
using namespace std;

int strlenX(char Str[])     //int strlenX(char *Str)
{
    int iCnt=0;

    while (*Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    char Arr[20];

    cout<<"Enter your first name : "<<"\n";
    cin>>Arr;

    cout<<"Name entered is : "<<Arr<<"\n";

    iRet = strlenX(Arr);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}