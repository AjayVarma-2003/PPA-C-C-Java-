 import java.util.*;

class ageInvalid extends Exception
{
    public ageInvalid(String str)
    {
       super(str);
    }
}

 class UserDefined
 {
    public static void main(String[] args) {
        int age = 0;
        Scanner sobj = new Scanner(System.in);

        try
        {
        System.out.println("Enter your age : ");
        age = sobj.nextInt();  
            if(age < 18)
                {
                throw new ageInvalid("Age is less than 18");
             }
        }  
        catch(ageInvalid obj)
        {
            System.out.println(obj);
        } 
    }
 }