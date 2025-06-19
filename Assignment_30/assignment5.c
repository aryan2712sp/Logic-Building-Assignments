//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program to check whether 1st and last bit is on or off (1st bit is bit 1 and last bit is bit 32).
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
    UINT iMask1 = 0x00000001;
    UINT iMask32 = 0x80000000;

    if (iNo & iMask1)
    {
        printf("1st Bit is ON\n");
    }
    else
    {
        printf("1st Bit is OFF\n");
    }

    if (iNo & iMask32)
    {
        printf("32nd Bit is ON\n");
    }
    else
    {
        printf("32nd Bit is OFF\n");
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
