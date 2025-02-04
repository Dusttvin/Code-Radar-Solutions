#include <stdio.h>

int main() {
    float num1, num2;

    // Read two floating-point numbers from the user
    scanf("%f %f", &num1, &num2);

    // Calculate the product
    float product = num1 * num2;

    // Print the product with two decimal places
    printf("Product: %.2f\n", product);

    return 0;
}