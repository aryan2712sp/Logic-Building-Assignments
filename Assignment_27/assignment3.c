//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accepts a string from user and copy capital characters of string into another string(Implement strcpy() function).
//  Author :        Aryan S. Pardeshi.
//  Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   "Marvellous Multi OS"
// Output  "MMOS"

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{

    while (*src != 0)
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyCap(Arr, Brr);

    printf("%s", Brr);

    return 0;
}