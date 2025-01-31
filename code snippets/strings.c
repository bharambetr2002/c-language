/*
String is a sequence of characters terminated with null characters
*/

#include <stdio.h>
int main()
{
    char str[] = "Tanmay Ravindra Bharambe"; // string in c - string declaration
    /*
    we can enter \0 (null character) manually or it is placed by compiler automatically by double quote
    */
    printf("%c\n", str[0]); // for single caracther
    printf("%s\n", str);

    char str2[50];
    scanf("%s\n", str2);
    printf("%s\n", str2); // this has limitation that the only text before the space is taken in to storage otherwise its erased
}
