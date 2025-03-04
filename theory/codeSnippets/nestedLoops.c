// Nested Loops Practice

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        printf("\n Outer Loops : %d", i);

        for (j = 1; j <= 3; j++)
        {
            printf("\n Inner %d", j);
        }
    }
}

/*
1
    1
    2
    3
2
    1
    2
    3
*/