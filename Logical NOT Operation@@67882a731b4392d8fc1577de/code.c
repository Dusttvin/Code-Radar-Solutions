#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // Read the input integer

    // Check if the number is not greater than zero using the ! operator
    if (!(num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
