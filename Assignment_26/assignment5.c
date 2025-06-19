/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write a program which accepts string from user & reverse the order of the string.
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrRevX(char *str, char ch)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
      
}


int main()
{
    char Arr[50];
    char cValue;


    printf("Enter the String : ");
    scanf("%[^\n]%*c", Arr);

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    StrRevX(Arr, cValue);

    printf("Modified String is :%s",Arr);

    return 0;
}
