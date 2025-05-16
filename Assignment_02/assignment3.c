/////////////////////////////////////////////////////////
//   
//   File name :    assignment3.c
//  Description :   Accept one number from user and if number is less than 10 then print hello or print demo.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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
