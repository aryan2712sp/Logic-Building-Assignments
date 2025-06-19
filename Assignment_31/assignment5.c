//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accept a number from user and on its 4th bit. Return modified number.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : 73
// Output  : 79

#include <stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x00000008;

    if ((iNo & iMask) == 0)
    {
        printf("4th Bit is OFF. Turning it ON...\n");
        iNo = iNo | iMask;
    }
    else
    {
        printf("4th Bit is already ON.\n");
    }

    return iNo;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OnBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
