//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts a string from user and copy content of string into another string(Implement strcpy() function).
//  Author :        Aryan S. Pardeshi.
//  Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   "Marvellous Multi OS"
// Output  "Marvellous Multi OS"        in another string

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    // Filter
    while (*src != 0)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s", Brr);

    return 0;
}