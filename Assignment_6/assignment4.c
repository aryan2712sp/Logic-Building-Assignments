/////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accept number from user and display its table.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Table(iValue);
    return 0;
}