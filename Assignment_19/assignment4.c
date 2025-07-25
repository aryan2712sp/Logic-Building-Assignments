////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Descreption :   Accept N numbers from user and return frequency of 11 form it.
//  Author :        Aryan S. Pardeshi
//  Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("%d", iRet);

    free(p);

    return 0;
}