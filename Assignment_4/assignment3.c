/////////////////////////////////////////////////////////
//
//   File name :    assignment3.c
//  Description :   Write a program which accept number from user and display its non-factors.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    NonFact(iValue);
    return 0;
}
