#include <iostream>
using namespace std;

template <class T>
class MarvellousArray
{
    private :
        T *Arr;
        int iSize;

    public : 
        MarvellousArray(int length)
        {
            cout<<"Inside constructor \n";
            iSize = length;
            Arr = new T [iSize];
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
    MarvellousArray <int> mobj(6);
    MarvellousArray <float> mobj1(4);

    mobj.accept();
    mobj1.accept();

    mobj.display();
    mobj1.display();  
      

    return 0;
}