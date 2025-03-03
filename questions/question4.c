/* Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting deductions.
1.PF is 2 % of basic
2.Tax is 3 % of basic
3.HRA is 5 % basic
4.DA is 8 % of basic */

#include <stdio.h>
int salary(int sal);

int main()
{
    printf("Enter your base salary: ");
    int sal;
    scanf("%d", &sal);
    int remain;
    remain = salary(sal);
    printf("%d", remain);
}
int salary(int sal)
{
    int final;
    final = (sal - (0.02 * sal) - (0.03 * sal) - (0.05 * sal) - (0.08 * sal));
    return final;
}