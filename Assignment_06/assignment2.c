/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Accept single digit from user and print it into words.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 0 || iNo > 9)
    {
        printf("Invalid input. Please enter a single digit (0-9).\n");
        return;
    }

    switch (iNo)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}