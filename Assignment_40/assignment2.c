////////////////////////////////////////////////////////////////////////////
//   
//   File name   : assignment2.c
//   Description : Write a program to display below pattern using recursion.
//   Author name : Aryan Shailendrasingh Pardeshi
//   Date        : 19/07/2025
//
////////////////////////////////////////////////////////////////////////////

//Output  1  2  3  4  5

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d  ",i);
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