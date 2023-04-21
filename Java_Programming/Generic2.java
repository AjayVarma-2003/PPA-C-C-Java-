class Generic2
{
    public static <T> void Display(T Arr[])
    {
        for(T no : Arr)
        {
            System.out.println(no);
        }
       /* for(int i = 0 ; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }*/ 
    }
    public static void main(String[] args) {
        Integer A[] = {10,20,30,40};
        Float B[] = {50.89f,60.90f,70.88f};
        Double C[] = {12.13,13.14,14.15};

        Display(A);
        Display(B);
        Display(C);
    }
}