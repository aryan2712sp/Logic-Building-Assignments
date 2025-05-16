/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which returns difference between even factorial and  odd factorial of a given number.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    // Calculate even factorial
    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact *= iCnt;
    }

    // Calculate odd factorial
    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iOddFact *= iCnt;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between Even Factorial and Odd Factorial of number is : %d\n", iRet);

    return 0;
}