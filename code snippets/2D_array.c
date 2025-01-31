// data_type array_name[row][colum]
/*
1------2-------3------4
00-----01-----02------03

4------5-------6-------7
10-----11------12-----13

7------8-------9-------8
20-----21------22------23
*/
#include <stdio.h>

int main()
{

    int myarray[3][3];
    for (int i = 0; i < 3; i++)
    { // Loop through rows
        for (int j = 0; j < 3; j++)
        { // Loop through columns
            printf("Enter the value for index [%d][%d]: ", i, j);
            scanf("%d", &myarray[i][j]); // Store input in the array
        }
    }

    // Print the array to verify
    printf("\nEntered Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", myarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}