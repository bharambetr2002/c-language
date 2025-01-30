#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    int modulo = a % b;
    int div = a / b;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mult);
    printf("%d\n", modulo);
    printf("%d\n", div);
}