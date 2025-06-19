/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Write a program which accepts string & character from user & display the frequency of that character.
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]%*c", Arr);  

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    iRet = CountChar(Arr, cValue);  

    printf("The Frequency of %c is %d.\n",cValue,iRet);

    return 0;
}
