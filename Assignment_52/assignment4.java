/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment4.java
//     Description :- Write a program which accepts two arrays from user and form new array which is combination of contents of first and second array.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int[] ArrayConcate(int arr1[], int iSize1, int arr2[], int iSize2)
    {
        int[] combined = new int[iSize1 + iSize2];

        for(int i = 0; i < iSize1; i++)
        {
            combined[i] = arr1[i];
        }

        for(int i = 0; i < iSize2; i++)
        {
            combined[iSize1 + i] = arr2[i];
        }

        return combined;
    }
}

class assignment4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of first array: ");
        int iSize1 = sobj.nextInt();
        int[] arr1 = new int[iSize1];
        System.out.println("Enter elements of first array:");
        for(int i = 0; i < iSize1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int iSize2 = sobj.nextInt();
        int[] arr2 = new int[iSize2];
        System.out.println("Enter elements of second array:");
        for(int i = 0; i < iSize2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        int[] combined = mobj.ArrayConcate(arr1, iSize1, arr2, iSize2);

        System.out.println("Combined array:");
        for(int i = 0; i < combined.length; i++)
        {
            System.out.print(combined[i] + " ");
        }

        System.out.println();
    }
}
