/*
Array allows us to store a collection of element of the same datatype under a single variable name.

how are the elements stored ?
the elements are stored in contiguous memeory locations.
for eg :-

23, 106, 12, 32, 43 ---data in array
12, 13 , 14, 15, 16 ---memory location

How to access the element - we access it with the help of index.
example - at index 0 = 23, at index 1 = 106.

in c language the index starts from the value 0.

why to use array
1. Grouping data
2. Sequential Access - as it stores in contiguous memeory locations so we can access them in sequentailly so we use array
3. Random Access - as we get an index for a value we can access it directly from there so we use the array so that the data can be stored easily and with help of index we can access it easily

types of array -
1. 1D array
2. 2D array

*/

// 1D array

#include <stdio.h>
int main()
{
    // manual data input in array
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", array[1]);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n ", array[i]); // Print each element
    }

    // using the index value
    int array_1[1];
    array_1[0] = 1;
    printf("%d\n", array[0]);

    // user input in array
    int myArray[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d index value:- ", i);
        scanf("%d", &myArray[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n ", myArray[i]); // Print each element
    }
}