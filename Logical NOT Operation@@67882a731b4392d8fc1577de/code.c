#include <stdio.h>
int main() {
    int number;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is not greater than zero
    if (! (number > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}