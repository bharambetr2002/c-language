//  Output a number entered by user

#include <stdio.h>

int main()
{
    // int myNum;
    // printf("Enter the number :\n");
    // scanf("%d", &myNum);
    // printf("Your name is %d", myNum);

    int myNum;
    char myChar;
    printf("Type a number and enter a character and press enter: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);
}