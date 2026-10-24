#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    printf("Enter principal, rate and time: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (principal < 0 || rate < 0 || time < 0) {
        printf("Values cannot be negative.\n");
        return 1;
    }

    simpleInterest = principal * rate * time / 100.0;
    compoundInterest =
        principal * (pow(1 + rate / 100.0, time) - 1);

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
