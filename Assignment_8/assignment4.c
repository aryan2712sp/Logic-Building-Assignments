/////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Accept temperature in Fahrenheit and convert to Celsius.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5.0 / 9.0;
}

int main()
{
    double fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.2lf\n", dRet);

    return 0;
}
