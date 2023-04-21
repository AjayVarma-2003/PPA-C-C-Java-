class Base
{
    public int A;
    public Base()
    {
        System.out.println("Inside Base Default constructor...");
        this.A=11;
    }
    public Base(int i)
    {
        System.out.println("Inside Base Parameterised Constructor...");
        this.A=i;
    }
    public void fun()
    {
        System.out.println("Inside Base function fun...");
    }
}

class Derived extends Base
{
    public int A;
    public Derived()
    {
        super(11);
        System.out.println("Inside Derived constructor...");
        this.A=51;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun...");
        System.out.println("Value of A : "+A);
        System.out.println("Value of A : "+this.A);
        System.out.println("Value of A : "+super.A);
        fun();
    }
}

class SuperDemo
{
    public static void main(String[] args) {
        Derived dobj = new Derived();
        dobj.gun();
    }
}

// 1. Access data of parent from child
// 2. Call method of parent from child
// 3. Call constructor of parent from child