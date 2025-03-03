/*
Accept two numbers and swap two numbers using
i) Third variable
ii) By performing arithmetic operations
*/

#include <stdio.h>

void swap(int *a, int *b);
void arithmeticOperations(int *a, int *b);
int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter swapping: num1 = %d, num2 = %d\n", num1, num2);

    arithmeticOperations(&num1, &num2);

    printf("\nAfter swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void arithmeticOperations(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}