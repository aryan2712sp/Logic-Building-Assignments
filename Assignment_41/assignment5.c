/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name    : assignment5.c
//    Description  : Write a program to print below pattern using recursion.
//    Author name  : Aryan Shailendrasingh Pardeshi
//    Date         : 19/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

// INPUT  6
// OUTPUT  a  b  c  d  e  f

#include <stdio.h>

void Display(int iNo, char ch)
{
    if(iNo > 0)
    {
        printf("%c   ", ch);
        Display(iNo - 1, ch + 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    if(iValue > 0 && iValue <= 26) 
    {
        Display(iValue, 'a');
    }
    else
    {
        printf("Please enter a number between 1 and 26.\n");
    }

    printf("\n");

    return 0;
}
