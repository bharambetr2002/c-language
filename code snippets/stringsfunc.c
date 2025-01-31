/*
already made functions
*/
#include <stdio.h>
#include <string.h> // all the ready made functions are stored in this

int main()
{
    char s1[30] = "Enter ur Last Name ";
    char s2[] = "Surname";
    strcat(s1, s2); // to add data from one string to another
    printf("%s\n", s1);
    printf("%d\n", strlen(s1)); // to count the string lenght
    char s3[30];
    strcpy(s3, s1); // to copy data between strings
    printf("%s\n", s3);
    printf("%s\n", strchr(s1, 'a'));  // to get the specific data from the string. if used strrchr then it gets last data from last word.
    printf("%s\n", strstr(s1, "ur")); // to get a datd from a words

    // strcmp is used to compare the 2 strings -  syntax =
    // int result = strcmp(s1, s2); // returns a int value
}