/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts a string from user and convert it into lower case.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: "Marvellous Multi OS"
// Output: marvellous multi os

#include <stdio.h>

void StrLwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z') // Check for capital letter
        {
            *str = *str + 32; // Convert to lowercase
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    StrLwrx(Arr);

    printf("Modified string is %s", Arr);

    return 0;
}
