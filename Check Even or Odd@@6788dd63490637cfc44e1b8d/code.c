#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // Read the input integer

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
