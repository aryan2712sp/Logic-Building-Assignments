/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment4.java
//     Description :- Write a program which accepts two arrays from user and copy contents of that array into another array and return new array.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int[] CopyArray(int Arr1[], int Arr2[])
    {
        int newSize = Arr1.length + Arr2.length;

        int[] newArr = new int[newSize];

        for (int i = 0; i < Arr1.length; i++)
        {
            newArr[i] = Arr1[i];
        }

        for (int i = 0; i < Arr2.length; i++)
        {
            newArr[Arr1.length + i] = Arr2[i];
        }

        return newArr;
    }
}

class assignment4
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

        int[] CombinedArr = mobj.CopyArray(Arr1, Arr2);

        System.out.println("Combined array contents:");

        for (int i = 0; i < CombinedArr.length; i++)
        {
            System.out.print(CombinedArr[i] + " ");
        }

        System.out.println(); 
    }
}
