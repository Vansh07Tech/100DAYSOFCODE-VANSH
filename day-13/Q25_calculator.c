
#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;
        case '-':
            printf("Result = %.2lf\n", a - b);
            break;
        case '*':
            printf("Result = %.2lf\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;
        case '%':
            if (b == (int)b && a == (int)a) {
                if ((int)b != 0)
                    printf("Result = %d\n",
                           (int)a % (int)b);
                else
                    printf("Modulo by zero is not allowed\n");
            } else {
                printf("Modulo requires integers\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
