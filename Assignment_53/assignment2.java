/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment2.java
//     Description :- Write a program which accepts two arrays from user and display minimum of each  arrays.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void MinArray(int Arr1[], int Arr2[])
    {
        int iMin1 = Arr1[0];
        int iMin2 = Arr2[0];

        for (int i = 1; i < Arr1.length; i++)
        {
            if (Arr1[i] < iMin1)
            {
                iMin1 = Arr1[i];
            }
        }

        for (int i = 1; i < Arr2.length; i++)
        {
            if (Arr2[i] < iMin2)
            {
                iMin2 = Arr2[i];
            }
        }

        System.out.println("Minimum element of first array: " + iMin1);
        System.out.println("Minimum element of second array: " + iMin2);
    }
}

class assignment2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of first array: ");
        int iSize1 = sobj.nextInt();

        int[] Arr1 = new int[iSize1];
        
        System.out.println("Enter elements of first array:");

        for (int i = 0; i < iSize1; i++)
        {
            Arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int iSize2 = sobj.nextInt();

        int[] Arr2 = new int[iSize2];

        System.out.println("Enter elements of second array:");

        for (int i = 0; i < iSize2; i++)
        {
            Arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.MinArray(Arr1, Arr2);
    }
}
