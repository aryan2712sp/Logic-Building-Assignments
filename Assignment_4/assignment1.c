/////////////////////////////////////////////////////////
//
//   File name :    assignment1.c
//  Description :   Write a program which accept number from user and display its multiplication of factors.
//  Author :        Aryan S. Pardeshi
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1; // Initialize to 1 for multiplication

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++) // Factors are less than the number itself
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);
    return 0;
}