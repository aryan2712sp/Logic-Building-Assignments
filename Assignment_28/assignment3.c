//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Description :   Write an application which accepts file name from user and read all data from that file and displays contents on screen.
//  Author :        Aryan S. Pardeshi.
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : Demo.txt
// Output  : Display all data of file.

#include <stdio.h>

int main()
{
    char FileName[50];
    FILE *fp = NULL;
    char ch;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    fp = fopen(FileName, "r");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("File contents:\n\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
}
