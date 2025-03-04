// creating a multi dimemntional array

#include <stdio.h>

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("\nRow %d ", i);
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    return 0;
    ;
}