// Passing multiple parameters in C

#include <stdio.h>
int myFunction(char name[], int age)
{
    printf("\n Hello %s. You are %d age old", name, age);
    return 0;
}

int main()
{
    myFunction("Tanmay", 22);
    myFunction("Aman", 25);
    return 0;
}