/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts number from user and return count of even digits.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
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
        if (iDigit % 2 == 0)
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
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);
    printf("Count of Even numbers is :%d", iRet);
    return 0;
}
