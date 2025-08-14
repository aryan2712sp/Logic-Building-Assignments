//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment4.c
//  Description :   Write an application which accepts file name from user and display size of file.
//  Author :        Aryan S. Pardeshi.
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : Demo.txt
// Output  : File size is __ bytes.

#include <stdio.h>

int main()
{
    char FileName[50];
    FILE *fp = NULL;
    long int size;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fclose(fp);

    printf("File size is %ld bytes.\n", size);

    return 0;
}
