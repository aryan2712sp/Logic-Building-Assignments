//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accepts a string from user and copy small characters of string into another string (Implement strcpy() function).
//  Author :        Aryan S. Pardeshi.
//  Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   "Marvellous multi OS"
// Output  "arvellous multi"

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a' && *src <= 'z') || *src == ' ')
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
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];

    StrCpySmall(Arr, Brr);

    printf("%s", Brr);

    return 0;
}
