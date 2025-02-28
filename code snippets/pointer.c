#include <stdio.h>

int main()
{
    int myAge = 43;                     // Initialize an integer variable 'myAge' with value 43
    printf("%d Int number", myAge);     // Print the value of 'myAge' (43)
    printf("\n%p Int Address", &myAge); // Print the memory address of 'myAge' using & (address-of operator)

    int *ptr = &myAge;                    // Declare a pointer 'ptr' and store the address of 'myAge' in it
    printf("\n%p pointer address", &ptr); // Print the memory address of the pointer 'ptr' (location of the pointer variable itself)

    printf("\n%d", *ptr); // Dereference the pointer 'ptr' to print the value at the memory address it points to (43)
    printf("\n%p", ptr);  // Print the address stored in the pointer 'ptr' (which is the address of 'myAge')
}
