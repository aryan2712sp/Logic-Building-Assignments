/////////////////////////////////////////////////////////
//   
//   File name :    assignment3.c
//  Description :   Write a program which accept one character from user and check whether that character is vowel(a,e,i,o,u) or not.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkVowel(char cValue)
{
    if((cValue == 'A', cValue == 'E', cValue == 'I', cValue == 'O', cValue == 'U',
        cValue == 'a',cValue == 'e', cValue == 'i', cValue == 'o', cValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter Character :\n");
    scanf("%c",&cValue);
    bRet = chkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is a vowel\n");
    }
    else
     {
        printf("It is not a vowel\n");
    }

}

