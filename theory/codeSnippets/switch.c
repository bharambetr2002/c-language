#include <stdio.h>

int main()
{
    int a = 2;
    switch (a)
    {
    case 1:
        printf("Hello");
        break;
    case 2:
        printf("Correct it");
        break;
    default:
        printf("Random Input");
    }
    return 0;
}