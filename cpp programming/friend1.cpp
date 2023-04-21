#include <iostream>
using namespace std;

class Hello
{
    public: 
        void gun();
};

class Marvellous
{
    public:
        void sun();
        void run();
};

class Demo 
{
    public : 
        int A;
    private:
        int B;
    protected:
        int C;

    public: 
        Demo(int i , int j , int k)
        {
            A=i;
            B=j;
            C=k;
        }
    friend void fun();
    friend void Hello::gun();
    friend class Marvellous;
};

void Hello:: gun()
{
  Demo obj1 (41,31,51);
  cout<<"Value of A : "<<obj1.A<<"\n";
  cout<<"Value of B : "<<obj1.B<<"\n";
  cout<<"Value of C : "<<obj1.C<<"\n\n";
}

void fun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n\n";
}

void Marvellous::run()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n\n";
}

void Marvellous::sun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n\n";
}

int main()
{
    fun();
    
    Hello obj2;
    obj2.gun();

    Marvellous mobj;
    mobj.run();
    mobj.sun();

    return 0;
}