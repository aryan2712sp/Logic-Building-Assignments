/////////////////////////////////////////////////////////
//   
//   File name :    assignment5.c
//  Description :   Accept number from user and check whether number is even or odd.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("The number is Even\n");
        return TRUE;
    }
    else
    {
        printf("The number is odd\n");
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = chkEven(iValue);
    return 0;
}