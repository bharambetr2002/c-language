#include <stdio.h>

int add(int, int, int); // Function prototype

int main()
{
    int a, b, c;
    printf("Enter the number 1\n");
    scanf("%d", &a);
    printf("Enter the number 2\n");
    scanf("%d", &b);
    printf("Enter the number 3\n");
    scanf("%d", &c);

    // Call the function
    int result = add(a, b, c);
    printf("The largest number is: %d\n", result);

    return 0; // Indicating successful program execution
}

int add(int a, int b, int c)
{
    printf("Calculating...\n"); // Added a newline for better readability
    if (a >= b && a >= c)       // Modified to include equality cases
    {
        return a;
    }
    else if (b >= a && b >= c) // Modified to include equality cases
    {
        return b;
    }
    else
    {
        return c;
    }
}
