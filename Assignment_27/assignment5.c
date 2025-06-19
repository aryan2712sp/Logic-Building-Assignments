//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accepts two string from user and concates second string after first string.(Implement StrCat() function).
//  Author :        Aryan S. Pardeshi.
//  Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   "Marvellous Infosystems"
//         "Logic Building"

// Output  "Marvellous Infosystems Logic Building"

#include <stdio.h>

void StrCatX(char *src, char *dest)
{

    while (*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Infosystems";
    char Brr[30] = "Logic Building";

    StrCatX(Arr, Brr);

    printf("%s", Arr);

    return 0;
}