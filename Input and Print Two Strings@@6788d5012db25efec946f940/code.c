#include <stdio.h>

int main() {
    int num;

    // Read an integer from the user
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit the program with an error code
    }

    // Print the hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}