/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 4   iCol = 3
// Output :  1  2  3
//           1  2  3
//           1  2  3
//           1  2  3

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0;
    int j = 0; 

    for(i = 1; i <= iRow; i++) 
    {
        for(j = 1; j <= iCol; j++) 
        {
            printf("%d\t", j);
        }
        printf("\n"); 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter the number of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
