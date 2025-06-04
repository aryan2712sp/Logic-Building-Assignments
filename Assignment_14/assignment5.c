/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Accept number of rows and columns from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  :  iRow = 4   iCol = 4
// Output :  1  2  3  4  
//           2  3  4  5
//           3  4  5  6
//           4  5  6  7


#include <stdio.h>

void Pattern(int iRow, int iCol) 
{
    for (int i = 1; i <= iRow; i++) 
    {
        for (int j = 1; j <= iCol; j++) 
        {
            printf("%d\t", i + j - 1);
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
