#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("please enter the value of a : ");
    scanf("%d", &a);
    printf("please enter the value of b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    if (b > a)
    {
        printf("b is greater than a\n");
    }
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("b is greater than a\n");
    }
}