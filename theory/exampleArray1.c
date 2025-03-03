// Program that calculate the average of the differenet ages

#include <stdio.h>
int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int sumAverage = 0;
    int sum = 0;
    int length = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < length; i++)
    {
        sum = sum + ages[i];
    }
    sumAverage = sum / length;
    printf("%d", sumAverage);
    return 0;
}