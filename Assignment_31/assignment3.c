//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accept a number from user and toggle 7th bit of that number. Return modified number.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : 137
// Output  : 201

#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;

    printf("Toggling 7th Bit...\n");
    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}
