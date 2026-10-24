
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct\n");
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf\n", r2);
    }
    else if (d == 0) {
        double r = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root = %.2lf\n", r);
    }
    else {
        double real = -b / (2 * a);
        double imaginary = sqrt(-d) / (2 * fabs(a));

        printf("Roots are complex\n");
        printf("Root 1 = %.2lf + %.2lfi\n",
               real, imaginary);
        printf("Root 2 = %.2lf - %.2lfi\n",
               real, imaginary);
    }

    return 0;
}
