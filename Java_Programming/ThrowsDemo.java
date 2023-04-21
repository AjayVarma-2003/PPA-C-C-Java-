class Demo 
{
    public float Division(int No1 , int No2)throws ArithmeticException
    {
        return No1/No2;
    } 
}

class ThrowsDemo
{
    public static void main(String[] args) {
        Demo obj = new Demo();
        float ret = 0.0f;

        try{
            ret = obj.Division(11, 0);
        }

        catch(ArithmeticException aobj)
        {
            System.out.println("Exception Occured...");
        }
        System.out.println(ret);
    }
}

/*
 void fun (Demo obj)
 {
    //code
 }

 Demo obj = new Demo();
 fun(obj);  //fun(0x100);
 
 catch(ArithematicExcpetion obj)
 {
    //code
 }
 */