// Accept the radius from user and compute the area and circumference of a circle.

#include <stdio.h>

int areaOfCircle(int radius);
int circumferenceOfCircle(int radius);
int main()
{
    printf("Enter the radius of the circle : ");
    int radius;
    scanf("%d", &radius);
    int area, circumferenc;
    area = areaOfCircle(radius);
    printf("\n Area of circle is %d", area);
    circumferenc = circumferenceOfCircle(radius);
    printf("\n Circumference of circle is %d", circumferenc);
}
int areaOfCircle(int radius)
{
    int area;
    area = 3.14 * radius * radius;
    return area;
}
int circumferenceOfCircle(int radius)
{
    int circumference;
    circumference = 2 * 3.14 * radius;
    return circumference;
}