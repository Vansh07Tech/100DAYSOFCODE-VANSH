#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
