class Demo
{
    //code
}

final class Base extends Demo
{
    //code
}

/*class Derived extends Base   (not allowed because Base is final class)
{
    //code
}*/

class final3
{
    public static void main(String[] args) 
    {
        Base bobj = new Base();
    }
}