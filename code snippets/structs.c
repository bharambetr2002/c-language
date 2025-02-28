#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};
/*
int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    return 0;
}*/

// Simple approach
int main()
{
    struct myStructure s1 = {
        12, 'B', "Some Text"};
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
    strcpy(s1.myString, "Semething Else");
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
    return 0;
}

