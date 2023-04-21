interface circle
{
    public final  float PI = 3.14f;
    public float CalculateArea(float radius);
    public float CalculateCircumference(float radius);
}

class Demo implements circle
{
    public float CalculateArea(float radius)
    {
        return PI * radius * radius;
    }
    public float CalculateCircumference(float radius)
    {
        return 2 * PI *radius;
    }
}

class interfacedemo
{
    public static void main(String[] args) {
        Demo obj = new Demo();
        float fRet = 0.0f;

        fRet = obj.CalculateCircumference(10.5f);
        System.out.println("CIrcumference is : "+fRet);

        fRet = obj.CalculateArea(5f);
        System.out.println("Area is : "+fRet);
    }
}