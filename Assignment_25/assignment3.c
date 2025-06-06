/////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accepts a string from user and toggle the case.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: "Marvellous Multi OS"
// Output: mARVELLOUS mULTI os

#include <stdio.h>

void StrTogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z') // Uppercase to lowercase
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z') // Lowercase to uppercase
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    StrTogglex(Arr);

    printf("Modified string is %s", Arr);

    return 0;
}
