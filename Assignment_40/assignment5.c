////////////////////////////////////////////////////////////////////////////
//   
//   File name   : assignment5.c
//   Description : Write a program to display below pattern using recursion.
//   Author name : Aryan Shailendrasingh Pardeshi
//   Date        : 19/07/2025
//
////////////////////////////////////////////////////////////////////////////

//Output  a  b  c  d  e  f 

#include<stdio.h>

void Display()
{
    static char i = 'a';

    if(i <= 'f')
    {
        printf("%c  ",i);
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