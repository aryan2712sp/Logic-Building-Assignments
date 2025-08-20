//////////////////////////////////////////////////////////////////////////
// 
//    File name    :- assignment3.java
//    Description  :- Write a program which accepts a string from user 
//                    and display below pattern.
//    Author name  :- Aryan Shailendrasingh Pardeshi
//    Date         :- 20/08/2025
//
//////////////////////////////////////////////////////////////////////////

// INPUT:  Hello

/* OUTPUT:
            H   
            H   e     
            H   e   l     
            H   e   l   l  
            H   e   l   l   o  
*/

import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int length = str.length();

        for(int i = 1; i <= length; i++)   
        {
            for(int j = 0; j < i; j++)    
            {
                System.out.print(str.charAt(j) + "\t");
            }
            System.out.println();
        }
    }
}

class assignment3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter a string : ");
        String iValue = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue);
    }
}
