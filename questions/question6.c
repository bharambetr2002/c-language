// Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr 2 + 2πrh,volume = π r 2 h). Define  a constant variable pi=3.14

#include <stdio.h>

float surfaceArea(float radius, float height);
float voloume(float radius, float height);
int main()
{
    printf("Enter the dimensions of the Cylinder in raidus and height : ");
    float cylinder;
    float height;
    float surfaceAreaCylinder;
    float volumeOfCylinder;

    scanf("%f %f", &cylinder, &height);
    // take input

    surfaceAreaCylinder = surfaceArea(cylinder, height);
    printf("\nThe Surface Area of the Cylinder is : %.2f", surfaceAreaCylinder);
    // surface area

    volumeOfCylinder = voloume(cylinder, height);
    printf("\nThe Volume of Cylinder is : %.2f", volumeOfCylinder);
    // volume
}

float surfaceArea(float radius, float height)
{
    float sA;
    sA = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
    return sA;
}

float voloume(float radius, float height)
{
    float v;
    v = 3.14 * radius * radius * height;
    return v;
}