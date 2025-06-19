//////////////////////////////////////////////////////////////////////////////////
//
//    File name   :- assignment4.c
//    Description :- Write a program which accepts character from user and checks whether it is small case or not.
//    Author name :- Aryan Shailendrasingh Pardeshi
//    Date        :- 05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

//  Input  : g
//  Output : True
//
//  Input  : D
//  Output : False

#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if (bRet == true)
    {
        printf("It is small case character.\n");
    }
    else
    {
        printf("It is not small case character.\n");
    }

    return 0;
}
