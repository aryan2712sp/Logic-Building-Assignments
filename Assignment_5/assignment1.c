/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accept number from user and print that number of $ & * on screen.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updator for negative input
    {
        printf("Input is Invalid");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}