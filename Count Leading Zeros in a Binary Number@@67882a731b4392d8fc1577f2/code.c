#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    // Assuming 32-bit integer
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int n = 1; // Test case 1
    printf("%d\n", countLeadingZeros(n));

    n = 2; // Test case 2
    printf("%d\n", countLeadingZeros(n));

    // Add more test cases here as needed
    return 0;
}
