/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accept number from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Handle negative input
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}