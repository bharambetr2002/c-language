/*
when fucton execution stops?
1. Retrun Statement
2. End of function

recursion is basically a programming technique in which a function calls itself to solve a problem

why use recursion -

1. Simplifies complex problem
2. Divide and conquer.
*/

#include <stdio.h>
int factorial(int);
int main()
{
    int n = 5;
    int fact = factorial(n);
    printf("%d", fact);
}
int factorial(int n)
{
    // base condition
    if (n == 1)
    {
        return 1;
    }
    else
    // recursive condition
    {
        return n * factorial(n - 1);
    }
}