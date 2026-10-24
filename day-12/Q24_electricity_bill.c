
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units\n");
    }
    else if (units <= 100) {
        bill = units * 5.0;
        printf("Electricity bill = Rs.%.2f\n", bill);
    }
    else if (units <= 200) {
        bill = 100 * 5.0
             + (units - 100) * 7.0;
        printf("Electricity bill = Rs.%.2f\n", bill);
    }
    else if (units <= 300) {
        bill = 100 * 5.0 + 100 * 7.0
             + (units - 200) * 10.0;
        printf("Electricity bill = Rs.%.2f\n", bill);
    }
    else {
        bill = 100 * 5.0 + 100 * 7.0
             + 100 * 10.0
             + (units - 300) * 12.0;
        printf("Electricity bill = Rs.%.2f\n", bill);
    }

    return 0;
}
