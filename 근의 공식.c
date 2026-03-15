#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 1;
    double b = -2;
    double c = -3;

    double root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("Root1 : %f\n", root1);
    printf("Root2 : %f\n", root2);
    return 0;
}
