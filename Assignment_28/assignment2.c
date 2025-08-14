//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment2.c
//  Description :   Write an application which accepts file name from user and create that file.
//  Author :        Aryan S. Pardeshi.
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : Demo.txt
// Output  : File created successfully.

#include <stdio.h>

int main()
{
    char FileName[50];
    FILE *fp = NULL;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "w");

    if (fp == NULL)
    {
        printf("Unable to create the file.\n");
    }
    else
    {
        printf("File created successfully.\n");
        fclose(fp);
    }

    return 0;
}
