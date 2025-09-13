/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment1.java
//     Description :- Write a program which accepts two arrays from user and returns difference between summation of arrays.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int DiffArray(int Arr1[], int Arr2[])
    {
        int iSum1 = 0, iSum2 = 0;

        for (int i = 0; i < Arr1.length; i++)
        {
            iSum1 += Arr1[i];
        }

        for (int i = 0; i < Arr2.length; i++)
        {
            iSum2 += Arr2[i];
        }

        if (iSum1 > iSum2)
        {
            return iSum1 - iSum2;
        }
        else
        {
            return iSum2 - iSum1;
        }
    }
}

class assignment1
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

        int diff = mobj.DiffArray(Arr1, Arr2);

        System.out.println("Difference between summation of both arrays: " + diff);
    }
}
