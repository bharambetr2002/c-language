#include <stdio.h>

int sumOfNum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int a = 10;
    int b = 20;
    int sum;
    sum = sumOfNum(a, b);
    printf("The sum is %d", sum);
}