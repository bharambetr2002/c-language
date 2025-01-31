#include <stdio.h>
void main()
{
    int a, b, choose;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    printf("Enter the operation\n 1 for Addition\n 2 for Multiplication\n 3 for Substraction\n 4 for Divison\n 5 for Modulus:-");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a * b);
        break;
    case 3:
        printf("%d", a - b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    case 5:
        printf("%d", a % b);
        break;
    default:
        printf("Invalid");
        break;
    }
}