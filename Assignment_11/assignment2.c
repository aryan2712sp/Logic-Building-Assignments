/////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Accept number from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

//Input  :  5
//Output :  5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number of Elements :");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}