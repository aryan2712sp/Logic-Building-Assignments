//////////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Accept N numbers from user And display all such elements which are divisible by 5.
//  Author :        Aryan S. Pardeshi
//  Date :          05/06/2025
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements divisible by 5 are : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Display(p, iSize);

    free(p);

    return 0;
}