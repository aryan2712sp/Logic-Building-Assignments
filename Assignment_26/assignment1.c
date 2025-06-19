/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts string from user & check whether the character is present in string or not. 
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write a program which accepts string from user & check whether the character is present in string or not. 
//  Author :        Aryan S. Pardeshi
//  Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// Case In-Sensitive
#define true 1
#define false 0
typedef int bool;

bool CheckChar(char *str, char ch)
{
    bool bFlag = false;
    char lwCh, upCh;


    if (ch >= 'A' && ch <= 'Z') {
        lwCh = ch + 32;
        upCh = ch;
    }

    else if (ch >= 'a' && ch <= 'z') {
        lwCh = ch;
        upCh = ch - 32;
    } else {
        lwCh = upCh = ch;  
    }

    while (*str != '\0')
    {
        if (*str == lwCh || *str == upCh)
        {
            bFlag = true;
        }
        str++;
    }

    return bFlag;

}

int main()
{
    char Arr[50];
    char cValue;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^\n]%*c", Arr);  // read string with spaces and discard newline

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    bRet = CheckChar(Arr, cValue);  // function call

    if (bRet == true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }

    return 0;
}
