/////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accepts distance in kilometers and convert it into meters.(1 km = 1000 meters)
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

int KmtoMeter(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo; // Handle negative input
    }

    return iNo * 1000; // Conversion
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance(Kilometers) : ");
    scanf("%d", &iValue);

    iRet = KmtoMeter(iValue);

    printf("Distance is(meters) : %d\n", iRet);

    return 0;
}
