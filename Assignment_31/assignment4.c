//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accept a number from user and toggle 7th bit and 10th bit of that number. Return modified number.
//  Author :        Aryan S. Pardeshi.
//  Date :          17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : 137
// Output  : 713

#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iMask1 = 0x00000200;

    printf("Toggling 7th Bit...\n");
    iNo = iNo ^ iMask;

    printf("Toggling 10th Bit...\n");
    iNo = iNo ^ iMask1;

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
