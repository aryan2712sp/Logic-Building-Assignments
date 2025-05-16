/////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program to find factorial of given number.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is :%d\n", iRet);
    return 0;
}