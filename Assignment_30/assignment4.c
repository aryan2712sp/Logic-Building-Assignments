//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program to check whether 7th, 8th, 9th bits are on or off.
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
    UINT iMask8 = 0x00000080;
    UINT iMask9 = 0x00000100;

    if (iNo & iMask7)
    {
        printf("7th Bit is ON\n");
    }
    else
    {
        printf("7th Bit is OFF\n");
    }

    if (iNo & iMask8)
    {
        printf("8th Bit is ON\n");
    }
    else
    {
        printf("8th Bit is OFF\n");
    }

    if (iNo & iMask9)
    {
        printf("9th Bit is ON\n");
    }
    else
    {
        printf("9th Bit is OFF\n");
    }
}

int main()
{
    int temp = 0;
    UINT iValue = 0;

    printf("Enter number: ");
    scanf("%d", &temp);
    iValue = (UINT)temp;

    ChkBit(iValue);

    return 0;
}
