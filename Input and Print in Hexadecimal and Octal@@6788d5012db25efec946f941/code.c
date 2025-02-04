#include <stdio.h>

int main() {
    int num;

    // Read an integer from the user
    scanf("%d", &num);

    // Print the hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}