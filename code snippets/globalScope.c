#include <stdio.h>
int x = 5; // global variable x
void myFunction()
{
    printf("%d", x);
}
int main()
{
    myFunction();
    printf("\n%d", x);
}