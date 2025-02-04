#include <stdio.h>

int main() {
    int num1, num2;

    // Get input from the user
    scanf("%d %d", &num1, &num2);

    // Check if the first number is greater than or equal to the second number
    if (num1 >= num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}