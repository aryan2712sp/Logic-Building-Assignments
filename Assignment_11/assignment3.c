/////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Accept number from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          03/06/2025
//
/////////////////////////////////////////////////////////

//Input  :  5
//Output :  1 * 2 * 3 * 4 * 5 *

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d * ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number of Elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
