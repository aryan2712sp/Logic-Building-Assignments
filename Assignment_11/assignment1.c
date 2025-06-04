/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Accept number from user and display below pattern.
//  Author :        Aryan S. Pardeshi.
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

//Input  :  5
//Output :  A B C D E

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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