/////////////////////////////////////////////////////////
//
//  File name :    assignment5.c
//  Description :   Write a program which accept number from user and return difference between summation of all its factors and non-factors.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }
    }

    return iSumNonFact - iSumFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference between sum of factors and non-factors is: %d\n", iRet);
    return 0;
}