//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program to check whether 15 bit is on or off.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define true 1
#define false 0

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        printf("15 Bit is ON\n");
    }
    else
    {
        printf("15 Bit is OFF\n");
    }

    return 0;
}
