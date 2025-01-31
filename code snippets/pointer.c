/*
pointer is a varible in c which stores the memory address if another vaiable
need for pointers ->
to implement data structures
to pass arguments by refernce
accessing array element
*/
#include <stdio.h>
int main()
{
    int a = 10;
    // syntax :- datatype *pointer_name;
    int *pointer = &a;       // pointer creation
    printf("%d\n", pointer); // address
    printf("%d", *pointer);  // value using pointer
}