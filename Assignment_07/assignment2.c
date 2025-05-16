/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Accept amount in Us dollar and return its corresponding value in Indian Currency.Take 1 Us dollar = 70 Rupees.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    iINR = iNo * 70;
    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR: %d\n", iRet);

    return 0;
}