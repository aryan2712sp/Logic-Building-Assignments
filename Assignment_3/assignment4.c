/////////////////////////////////////////////////////////
//   
//   File name :    assignment3.c
//  Description :   Write a program which accept one factor from user and change case of that character.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(int cValue)
{
    if(cValue >= '0' && cValue <= '9')
    {
        printf("%d",cValue - '0');
    }
    else if((cValue >= 'A' && cValue <= 'Z') || (cValue >= 'a' && cValue <= 'z'))
    {
        printf("%d",cValue);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter Number :\n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;

}