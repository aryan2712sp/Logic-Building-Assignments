/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment5.java
//     Description :- Write a program which accepts two arrays from user and display summation of each array.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void SumArray(int arr1[], int arr2[])
    {
        int iSum1 = 0;
        int iSum2 = 0;

        for(int i = 0; i < arr1.length; i++)
        {
            iSum1 += arr1[i];
        }

        for(int i = 0; i < arr2.length; i++)
        {
            iSum2 += arr2[i];
        }

        System.out.println("Summation of first array: " + iSum1);
        System.out.println("Summation of second array: " + iSum2);
    }
}

class assignment5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter size of first array: ");
        int size1 = sobj.nextInt();
        int[] arr1 = new int[size1];

        System.out.println("Enter elements of first array:");
        for(int i = 0; i < size1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        int size2 = sobj.nextInt();
        int[] arr2 = new int[size2];

        System.out.println("Enter elements of second array:");
        for(int i = 0; i < size2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.SumArray(arr1, arr2);
    }
}
