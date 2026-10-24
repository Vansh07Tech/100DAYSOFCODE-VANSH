
#include <stdio.h>

int main() {
    int days;
    int fine;

    printf("Enter late days: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid number of days\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Library fine = Rs.%d\n", fine);
    }
    else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Library fine = Rs.%d\n", fine);
    }
    else if (days <= 30) {
        fine = 5 * 2 + 5 * 4
             + (days - 10) * 6;
        printf("Library fine = Rs.%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
