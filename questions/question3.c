// Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.

#include <stdio.h>
float calculatePercentage(int marks[5], int sum);
int sum(int marks[5]);
int main()
{
    int marks[5];
    printf("Enter the marks of top 5 subjects : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    int sumTotal;
    sumTotal = sum(marks);
    printf("\nSum of your marks is %d", sumTotal);
    float percentage;
    percentage = calculatePercentage(marks, sumTotal);
    printf("\nYour total percentage is %.2f", percentage);
}

int sum(int marks[5])
{
    int sumOfMarks = 0;
    for (int i = 0; i < 5; i++)
    {
        sumOfMarks = sumOfMarks + marks[i];
    }
    return sumOfMarks;
}

float calculatePercentage(int marks[5], int sumTotal)
{
    float percentageOfMarks = (sumTotal / 500.0) * 100;
    return percentageOfMarks;
}