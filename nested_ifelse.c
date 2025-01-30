#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a:- \n");
    scanf("%d", &a);
    printf("Enter the value of b:- \n");
    scanf("%d", &b);

    if (a > 0 && b > 0)
    {
        if (a > b)
        {
            printf("a is greater than b which is %d", a);
        }
        else
        {
            printf("b is greater than a which is %d", b);
        }
    }
    else
    {
        printf("Enter a postive number");
    }
}