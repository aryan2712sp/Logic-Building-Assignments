/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write a program which accepts string & character from user & return index of the first occurence of that character.
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;  
        }
        str++;
        iCount++;
    }
    return -1;

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

    iRet = FirstChar(Arr, cValue);  

    printf("%d\n",iRet);

    return 0;
}

