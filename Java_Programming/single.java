class Base
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside Base constructor...");
        this.A=11;
        this.B=21;
    }
    public void fun()
    {
        System.out.print("Inside base fun... ");
    }
}

class Derived extends Base{
    public int x;
    public int y;
    public Derived()
    {
        System.out.println("Inside Derived constructor...");
        this.x=51;
        this.y=101;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun...");
    }
}

class single
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived();
        dobj.fun();
        dobj.gun();

        System.out.println(dobj.A);
        System.out.println(dobj.B);
        System.out.println(dobj.x);
        System.out.println(dobj.y);
    }
}

//        Base bobj2 = new Derived();     // Upcasting
//        Derived dobj2 = new Base();     // Downcasring
//        Base bobj = new Base();         // No casting