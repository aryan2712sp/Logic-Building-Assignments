//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Write a program to check whether 15th & 18th bit are on or off.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define true 1
#define false 0

void ChkBit(UINT iNo)
{
    UINT iMask15 = 0x00004000;
    UINT iMask18 = 0x00020000;

    if (iNo & iMask15)
    {
        printf("15th Bit is ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }

    if (iNo & iMask18)
    {
        printf("18th Bit is ON\n");
    }
    else
    {
        printf("18th Bit is OFF\n");
    }
}

int main()
{
    UINT iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    ChkBit(iValue);

    return 0;
}
