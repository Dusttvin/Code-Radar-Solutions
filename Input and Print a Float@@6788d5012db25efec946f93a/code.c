#include <stdio.h>

int main() {
    float number;

    // Read the floating-point number from the user
    scanf("%f", &number);

    // Print the entered float with exactly two decimal places
    printf("You entered: %.2f\n", number);

    return 0;
}
