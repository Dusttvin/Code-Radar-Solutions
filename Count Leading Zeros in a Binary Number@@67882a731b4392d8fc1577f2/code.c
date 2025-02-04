#include <stdio.h>

int countLeadingZeros(unsigned int number) {
    if (number == 0) return 32;
    int count = 0;
    while ((number & 0x80000000) == 0) {
        count++;
        number <<= 1;
    }
    return count;
}

int main() {
    unsigned int number;
    scanf("%u", &number);
    printf("%d\n", countLeadingZeros(number));
    return 0;
}
