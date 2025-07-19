/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name    : assignment1.c
//    Description  : Write a program to print below pattern using recursion.
//    Author name  : Aryan Shailendrasingh Pardeshi
//    Date         : 19/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

// INPUT  5
// OUTPUT *  *  *  *  *

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*  ");
        Display(iNo - 1);  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\n");

    return 0;
}

