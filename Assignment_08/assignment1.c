/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts radius of circle from user and calculate its area.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#define PI 3.14159

double CircleArea(float fRadius)
{
    if (fRadius < 0)
    {
        fRadius = -fRadius; // Handle negative radius
    }

    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter number : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f\n", dRet);

    return 0;
}