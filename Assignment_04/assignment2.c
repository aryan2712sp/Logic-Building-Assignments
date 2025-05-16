/////////////////////////////////////////////////////////
//
//   File name :    assignment2.c
//  Description :   Write a program which accept number from user and display its factors in decreasing order.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <Stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    FactRev(iValue);
    return 0;
}