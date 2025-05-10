/////////////////////////////////////////////////////////
//   
//   File name :    assignment1.c
//  Description :   Write a program which accept one number from user and print that number of even numbers on screen.
//  Author :        Aryan S. Pardeshi
//  Date :          10/05/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        printf("Please enter a positive number.\n");
        return ;
    }
     printf("Even numbers up to %d are:\n", iNo);
    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;

}