/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accept number from user and display its table in reverse order.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    TableRev(iValue);
    return 0;
}