/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Write a program which accepts a string from user and convert it into lupper case.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: "marvellous multi os"
// Output: Marvellous Multi OS

#include <stdio.h>

void StrUprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z') // Check for capital letter
        {
            *str = *str - 32; // Convert to Uppercase
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    StrUprx(Arr);

    printf("Modified string is %s", Arr);

    return 0;
}
