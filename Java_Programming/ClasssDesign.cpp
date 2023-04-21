#include <iostream>
using namespace std;

class MarvellousArray
{
    private :
        int *Arr;
        int iSize;

    public : 
        MarvellousArray(int length)
        {
            cout<<"Inside constructor \n";
            iSize = length;
            Arr = new int [iSize];
        }
        ~MarvellousArray()
        {
            cout<<"Inside destructor \n";
            delete []Arr;
        }
        void accept()
        {
            cout<<"Enter the value : "<<"\n";
            for(int i = 0; i <iSize ; i++)
            {
                cin>>Arr[i];
            }
        }
        void display()
        {
            cout<<"Elements of aray are : "<<"\n";
            for(int i = 0 ; i <iSize ; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    MarvellousArray mobj(6);
    MarvellousArray mobj1(4);

    mobj.accept();
    mobj1.accept();

    mobj.display();
    mobj1.display();        

    return 0;
}