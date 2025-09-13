/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment5.java
//     Description :- Write a program which accepts two arrays from user and check whether that array and its elements are palindrome or not. 
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public boolean isPalindrome(int[] Arr)
    {
        int start = 0;
        int end = Arr.length - 1;

        while (start < end)
        {
            if (Arr[start] != Arr[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    public int[] CopyArray(int[] Arr1, int[] Arr2)
    {
        int[] newArr = new int[Arr1.length + Arr2.length];

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

class assignment5
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

        boolean isArr1Palin = mobj.isPalindrome(Arr1);
        boolean isArr2Palin = mobj.isPalindrome(Arr2);

        int[] CombinedArr = mobj.CopyArray(Arr1, Arr2);
        boolean isCombinedPalin = mobj.isPalindrome(CombinedArr);

        System.out.println();

        System.out.println("First array is " + (isArr1Palin ? "a palindrome." : "not a palindrome."));

        System.out.println("Second array is " + (isArr2Palin ? "a palindrome." : "not a palindrome."));

        System.out.println("Combined array is " + (isCombinedPalin ? "a palindrome." : "not a palindrome."));
    }
}
