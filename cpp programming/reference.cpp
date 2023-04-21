#include <iostream>
using namespace std;
 int main()
 {
    int No=11;
    int &X=No;

    cout<<"Value of No is : "<<No<<"\n";

    cout<<"Value of X is (which is reference of No) : "<<X<<"\n";

    return 0;
 }