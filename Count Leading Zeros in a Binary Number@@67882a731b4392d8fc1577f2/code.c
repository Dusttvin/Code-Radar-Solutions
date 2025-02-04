#include <stdio.h>

int countLeadingZeros(unsigned int number) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((number & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }
    return count;
}

int main() {
    unsigned int number = 1; // change this value for different inputs
    printf("Number of leading zeros: %d\n", countLeadingZeros(number));
    return 0;
}
