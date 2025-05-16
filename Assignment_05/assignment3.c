/////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accept number from user and print its number line.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updator for negative input
    {
        iNo = -iNo;
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}