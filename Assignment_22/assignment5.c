//////////////////////////////////////////////////////////////////////////////////
//
//    File name   :- assignment5.c
//    Description :- Write a program which accepts division from user and, depending on the division, displays your exam timing. There are four divisions in school A,B,C,D. Exam of division A at 7am, B at 8:30am, C at 9:20am, D at 10:30am. (Application should be case insensitive)
//    Author name :- Aryan Shailendrasingh Pardeshi
//    Date        :- 05/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7:00 am\n");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8:30 am\n");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9:20 am\n");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10:30 am\n");
    }
    else
    {
        printf("Invalid division entered.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
