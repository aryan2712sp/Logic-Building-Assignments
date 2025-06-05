/////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//  Author :        Aryan S. Pardeshi.
//  Date :          04/06/2025
//
/////////////////////////////////////////////////////////

// Input  N: 6
//        Elements  : 85 66 3 80 93 88
// Output :  53  (234 - 181)

#include <stdio.h>
#include <stdlib.h> // for malloc and free

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0, iOddSum = 0;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 == 0)
            iEvenSum += Arr[i];
        else
            iOddSum += Arr[i];
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements: ");
    scanf("%d", &iSize);

    if (iSize <= 0)
    {
        printf("Invalid input\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}