//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accept a number from user and off 7th bit of that number if it is on. Return modified number.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   75
// Output  15

#include <stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;

    if ((iNo & iMask) == 0)
    {
        printf("7th Bit is already OFF.\n");
    }
    else
    {
        UINT iMask1 = ~iMask;
        iNo = iNo & iMask1;
        printf("7th Bit was ON. Turning it OFF...\n");
    }

    return iNo;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
