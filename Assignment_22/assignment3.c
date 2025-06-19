//////////////////////////////////////////////////////////////////////////////////
//
//    File name   :- assignment3.c
//    Description :- Write a program which accepts character from user and checks whether it is digit or not.
//    Author name :- Aryan Shailendrasingh Pardeshi
//    Date        :- 05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

//  Input  : 7
//  Output : True
//
//  Input  : d
//  Output : False

#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf(" %c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == true)
    {
        printf("It is Digit.\n");
    }
    else
    {
        printf("It is not Digit.\n");
    }

    return 0;
}
