/////////////////////////////////////////////////////////
//   
//   File name :    assignment2.c
//  Description :   Accept one number from user and print that number of * on screen.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
 void Display(int iNo)
 {   
    int iCnt = 0;
    while(iNo > iCnt)
    {
        printf("%d\n", iCnt);
        iNo--;
    }
 }

 int main()
 {
    int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
 }