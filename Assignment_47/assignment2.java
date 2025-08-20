//////////////////////////////////////////////////////////////////////////
// 
//    File name    :- assignment2.java
//    Description  :- Write a program which accepts number of rows and 
//                    columns from user and display below pattern.
//    Author name  :- Aryan Shailendrasingh Pardeshi
//    Date         :- 19/08/2025
//
//////////////////////////////////////////////////////////////////////////

// INPUT:  iRow = 4, iCol = 3

/* OUTPUT:
            1   2   3   
            1   2   3   
            1   2   3
            1   2   3 
*/

import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)  
        {
            for(int j = 1; j <= iCol; j++)  
            {
                System.out.print(j + "\t");  
            }
            System.out.println();
        }
    }
}

class assignment2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.print("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1, iValue2);
    }
}
