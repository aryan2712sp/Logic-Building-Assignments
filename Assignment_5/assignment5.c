/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accept N from user and print first 5 multiples of N.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}