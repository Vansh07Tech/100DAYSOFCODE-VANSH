
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0) {
        printf("Invalid cost price\n");
    }
    else if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice)
                      / costPrice) * 100;
        printf("Profit = %.2f\n",
               sellingPrice - costPrice);
        printf("Profit percentage = %.2f%%\n",
               percentage);
    }
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice)
                      / costPrice) * 100;
        printf("Loss = %.2f\n",
               costPrice - sellingPrice);
        printf("Loss percentage = %.2f%%\n",
               percentage);
    }
    else {
        printf("No profit, no loss\n");
    }

    return 0;
}
