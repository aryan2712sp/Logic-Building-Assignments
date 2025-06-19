//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program to check whether 7th, 15th, 21st, and 28th bits are on or off.
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
    UINT iMask7 = 0x00000040;
    UINT iMask15 = 0x00004000;
    UINT iMask21 = 0x00100000;
    UINT iMask28 = 0x08000000;

    if (iNo & iMask7)
    {
        printf("7th Bit is ON\n");
    }
    else
    {
        printf("7th Bit is OFF\n");
    }

    if (iNo & iMask15)
    {
        printf("15th Bit is ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }

    if (iNo & iMask21)
    {
        printf("21st Bit is ON\n");
    }
    else
    {
        printf("21st Bit is OFF\n");
    }

    if (iNo & iMask28)
    {
        printf("28th Bit is ON\n");
    }
    else
    {
        printf("28th Bit is OFF\n");
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
