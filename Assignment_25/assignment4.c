/////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accepts a string from user and display only digits from that string.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: Marve89llous121
// Output: 89121

// Input: Demo
// Output:

#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9') // Check for digit
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    DisplayDigit(Arr);

    return 0;
}
