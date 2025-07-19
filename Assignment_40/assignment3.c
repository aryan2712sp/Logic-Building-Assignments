////////////////////////////////////////////////////////////////////////////
//   
//   File name   : assignment3.c
//   Description : Write a program to display below pattern using recursion.
//   Author name : Aryan Shailendrasingh Pardeshi
//   Date        : 19/07/2025
//
////////////////////////////////////////////////////////////////////////////

//Output  5  4  3  2  1

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i > 0)
    {
        printf("%d  ",i);
        i--;

    Display();
    }
}

int main()
{
    Display();
    printf("\n");

    return 0;
}