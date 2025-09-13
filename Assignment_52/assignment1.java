/////////////////////////////////////////////////////////////////////////////
//
//     File name   :- assignment1.java
//     Description :- Write a program which accepts two arrays from user and display contents of each array.
//     Author name :- Aryan Shailendrasingh Pardeshi
//     Date & Day  :- 13/09/2025 |  SATURDAY
//
/////////////////////////////////////////////////////////////////////////////

// INPUT  2  9  7  5  2  3  9  3  5  5
// OUTPUT 2  9  7  5  2  3  9  3  5  5

import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[])
    {
        System.out.println("Contents of first array:");
        for(int i = 0; i < arr1.length; i++)
        {
            System.out.print(arr1[i] + " ");
        }

        System.out.println("\nContents of second array:");
        for(int i = 0; i < arr2.length; i++)
        {
            System.out.print(arr2[i] + " ");
        }

        System.out.println(); 
    }
}

class assignment1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the size of first array: ");
        int size1 = sobj.nextInt();

        int[] arr1 = new int[size1];

        System.out.println("Enter elements for first array:");

        for(int i = 0; i < size1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter the size of second array: ");
        int size2 = sobj.nextInt();

        int[] arr2 = new int[size2];

        System.out.println("Enter elements for second array:");

        for(int i = 0; i < size2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        mobj.Display(arr1, arr2);
    }
}
