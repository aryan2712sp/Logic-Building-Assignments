//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment1.c
//  Description :   Write an application which accepts file name from user and open that file in readmode.
//  Author :        Aryan S. Pardeshi.
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   Demo.txt
// Output  File opened successfully.

#include <stdio.h>

int main()
{
    char FileName[50];
    FILE *fp = NULL;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("File opened successfully.\n");
        fclose(fp);
    }

    return 0;
}
