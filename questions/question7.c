// Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15)

#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &temperature);
    printf("%.3f", temperature);
    float celsius, kelvin;
    celsius = (5 / 9.0) * (temperature - 32);
    kelvin = kelvin + 273.15;
    printf("\nThe conversion in Celsius in %.3f & in kelvin is %.3f", celsius, kelvin);
}
