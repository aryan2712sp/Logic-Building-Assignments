////////////////////////////////////////////////////////////////////////////
//   
//   File name   : assignment4.c
//   Description : Write a program to display below pattern using recursion.
//   Author name : Aryan Shailendrasingh Pardeshi
//   Date        : 19/07/2025
//
////////////////////////////////////////////////////////////////////////////

//Output  A  B  C  D  E  F

#include<stdio.h>

void Display()
{
    static char i = 'A';

    if(i <= 'F')
    {
        printf("%c ",i);
        i++;

    Display();
    }
}

int main()
{
    Display();
    printf("\n");

    return 0;
}