/////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accepts number from user and count frequency of 4 in it.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);
    printf("Frequency of 4 is :%d", bRet);
    return 0;
}
