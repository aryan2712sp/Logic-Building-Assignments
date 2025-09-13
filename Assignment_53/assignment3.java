/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment3.java
//     Description :- Write a program which accepts two arrays from user and copy contents of that array into another array in reverse order and return new array.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int[] CopyArrayRev(int Arr[])
    {
        int[] RevArr = new int[Arr.length];

        for (int i = 0; i < Arr.length; i++)
        {
            RevArr[i] = Arr[Arr.length - 1 - i];
        }

        return RevArr;
    }
}

class assignment3
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

        int[] RevArr1 = mobj.CopyArrayRev(Arr1);
        int[] RevArr2 = mobj.CopyArrayRev(Arr2);

        System.out.println("Reversed contents of first array:");

        for (int i = 0; i < RevArr1.length; i++)
        {
            System.out.print(RevArr1[i] + " ");
        }

        System.out.println("\nReversed contents of second array:");

        for (int i = 0; i < RevArr2.length; i++)
        {
            System.out.print(RevArr2[i] + " ");
        }

        System.out.println(); 
    }
}
