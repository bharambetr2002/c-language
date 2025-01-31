/*
structure and union are user defined data types in c that allow you to group together related data items of different types.

difference between structure and union
structure | Union
each member has it own memory locaton | All members share the same memory location
can access and modify each member independently | can only access and modify one member at a  time
*/

#include <stdio.h>
#include <string.h>

struct form // structure creation
{
    char name[20];
    char mobile[20];
    char email[15];
    float age;
};
int main()
{
    struct form tanmay; // variable creation
    tanmay.age = 15;
    strcpy(tanmay.name, "Tanmay Bharambe"); // we cant direct type in string so we are using string copy
    printf("%s\n", tanmay.name);
    printf("%f", tanmay.age);
}

// now for union just the difference is that we use union in place of struc