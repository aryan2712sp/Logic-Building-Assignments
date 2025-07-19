/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name    : assignment2.c
//    Description  : Write a program to print below pattern using recursion.
//    Author name  : Aryan Shailendrasingh Pardeshi
//    Date         : 19/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

// INPUT  5
// OUTPUT 1   2   3   4   5

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {    
        Display(iNo - 1); 

        printf("%d   ",iNo);
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

