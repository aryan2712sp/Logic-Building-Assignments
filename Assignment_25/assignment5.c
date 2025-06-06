/////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accepts a string from user and count number of white spaces.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
//////////////////////////////////////////////////////////

// Input: Marvellous
// Output: 0

// Input: Marvellous Infosystems
// Output: 1

#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]", Arr);

    iRet = CountWhite(Arr);
    printf("%d", iRet);

    return 0;
}
