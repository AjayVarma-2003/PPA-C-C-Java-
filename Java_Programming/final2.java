class base 
{
    public void fun()
    {
        System.out.println("Base fun...");
    }
    final public void gun()
    {
        System.out.println("Base gun...");
    }
}

class derived extends base
{
    public void fun()
    {
        System.out.println("Derived fun...");
    }
    /*public void gun()         not allowed due to gun is final method
    {
        System.out.println("Derived gun...");    
    }*/
}

class final2
{
    public static void main(String[] args) 
    {
       base obj1 = new derived();
       obj1.fun();  //Derived fun
       obj1.gun();  //Base gun
    }
}