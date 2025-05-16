/////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program to find odd factorial of a given number.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d\n", iRet);

    return 0;
}