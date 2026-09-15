public class Array
{
    public static void main (String [] Args)
    {
        ConsoleInput ConsoleInputProgram=new ConsoleInput();
        System.out.println("Enter Size of array : " );

        int size =ConsoleInputProgram.getInt();
        int [] arr = new int [size];

        System.out.println("Enter " + size +" Elements of array : " );

        for (int i = 0 ; i< size ; i++ )
        {
            arr[i] = ConsoleInputProgram.getInt();
        }


        for( int a = 0 ;  a< arr.length ; a++)
        {

            for(int b= 0; b< arr.length-a-1; b++)
            {
                if(arr[b] > arr [b+1])
                {



                    int temp =arr[b];
                    arr[b]= arr[b+1];
                    arr[b+1] = temp;

                }

            }
        }

        int sum =0;
        System.out.print("Sorted array : ");
        for(int ele : arr)
        {
            sum += ele;
            System.out.print(ele);

        }
        System.out.print("  Sum of ele: "+ sum);
        System.out.print("  Avg of Elements : "+ sum/size);

        int arrCpy [] = new int[size];
        for (int i =0 ; i< arr.length;i++)
        {
            arrCpy[i]= arr[i];
        }

        System.out.print("\n New Copied Arry : ");

        int max =0 ; int min = arr[0];

        for(int cpyEle :arrCpy)
        {
            if(max < cpyEle)
            {

                max = cpyEle;
            }

            if(min > cpyEle)
            {

                min = cpyEle;
            }

            System.out.print(cpyEle);
        }

        System.out.println("   Max Element of array : " + max +"  Min Element of array : "+ min);
        System.out.println(" Duplicate elements are : ");


        for(int i =0 ;i< arr.length; i++)
        {
            int count = 0;
            for(int j = i+1 ; j<arr.length-1 ;j++)
            {

                if(arr[i] == arr[j])
                {
                    count ++;



                }
            }
            System.out.println(arr[i] + " - " + count );
        }

        System.out.print("=============================================\n"
                + "        \n Acceptin element for 2nd array \n"
                + "=============================================== ");

        int arr3 [] = new int [size];
        for(int i =0 ; i<arr3.length;i++)
        {

            arr3[i]= ConsoleInputProgram.getInt();
        }


        System.out.println("Duplicate elemts form both Arryas : ");

        for (int i = 0 ; i<arr.length; i++)
        {
            int count =0;
            for(int j=0; j<arr3.length;j++)
            {
                if(arr[i] ==  arr3[j])
                {

                    count ++;
                }
            }

            System.out.println(arr[i] + " - " + count );

        }

    }

}