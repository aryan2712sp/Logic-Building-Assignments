/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write a program which accepts string & character from user & return index of the last occurence of that character.
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iLastIndex = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLastIndex = iCount;
        }
        str++;
        iCount++;
    }

    return iLastIndex;
}

int main()
{
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]%*c", Arr);

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("%d\n", iRet);

    return 0;
}
