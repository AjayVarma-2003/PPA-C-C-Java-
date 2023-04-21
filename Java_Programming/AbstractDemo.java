abstract class RBI    //we can't create object of this class 
{
    public abstract float CalculateROI();
    public void displayrules()
    {
        System.out.println("You have to submit id proofs...");
        System.out.println("Minimum balance is 10000");
    }
}

class SBI extends RBI
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}

class BOM extends RBI
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}

class AbstractDemo
{
    public static void main(String[] args) {
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.displayrules();
        bobj.displayrules();

        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is "+sobj.CalculateROI());

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is "+bobj.CalculateROI());

    }
}