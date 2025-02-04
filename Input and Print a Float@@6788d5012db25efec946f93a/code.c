#include <stdio.h>

int main() {
    float number;

    // Prompt the user for input (optional)
    printf("Enter a floating-point number: ");

    // Read the floating-point number from the user
    scanf("%f", &number);

    // Print the entered float
    printf("You entered: %.2f\n", number);

    return 0;
}