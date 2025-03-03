#include <stdio.h>

struct car
{
    char brand[50];
    char model[50];
    int year;
};
int main()
{
    struct car car1 = {"BMW", "M1", 2002};
    struct car car2 = {"BMW", "X5", 1999};
    struct car car3 = {"Ford", "Mustang", 1969};
    struct car car4 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d", car1.brand, car1.model, car1.year);
    printf("%s %s %d", car2.brand, car2.model, car3.year);
    printf("%s %s %d", car3.brand, car2.model, car3.year);
    return 0;
}