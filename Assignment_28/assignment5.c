//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment5.c
//  Description :   Write an application which accepts file name & one string from user. Write that string at end of that file.
//  Author :        Aryan S. Pardeshi.
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Input   : Demo.txt
//           Hello World
// Output  : Write Hello World at end of Demo.txt file.

#include <stdio.h>

int main()
{
    char FileName[50];
    char Data[100];
    FILE *fp = NULL;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the string to append: ");
    getchar();
    fgets(Data, sizeof(Data), stdin);

    fp = fopen(FileName, "a");

    if (fp == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    fputs(Data, fp);
    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}
