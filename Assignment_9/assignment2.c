/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Write a program which accepts number from user and check whether it contains 0 or not.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0) // Handle negative numbers
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contains zero");
    }

    return 0;
}
