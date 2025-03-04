// trying local varibale

#include <stdio.h>
int myFunction()
{
    int i = 5;
    printf("%d", i);
}
int main()
{
    myFunction();
    // the int i created in myFunction can not be used in main
    return 0;
}