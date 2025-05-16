/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   write a program which accepts area in square feet and convert it into square meter.(1 square feet = 0.0929 Square meter)
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    double iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet: ");
    scanf("%lf", &iValue);

    dRet = SquareMeter(iValue);

    printf("Temperature in Celsius: %.2lf\n", dRet);

    return 0;
}
