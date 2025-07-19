////////////////////////////////////////////////////////////////////////////
//   
//   File name   : assignment1.c
//   Description : Write a program to display below pattern using recursion.
//   Author name : Aryan Shailendrasingh Pardeshi
//   Date        : 19/07/2025
//
////////////////////////////////////////////////////////////////////////////

//Output  *  *  *  *  *

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("*  ");
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