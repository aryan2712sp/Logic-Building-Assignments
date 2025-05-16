/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accept number from user and if less than 50 then print small, if it is greater than 50 and less than 100 print medium,if it is greater than 100 then print large.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Number is small");
    }

    if ((iNo >= 50) && (iNo <= 100))
    {
        printf("Number is medium");
    }
    else if (iNo > 100)
    {
        printf("Number is large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Number(iValue);
    return 0;
}