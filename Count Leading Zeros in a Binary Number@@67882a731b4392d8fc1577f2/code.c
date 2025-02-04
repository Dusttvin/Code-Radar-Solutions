#include <stdio.h>

int countLeadingZeros(unsigned int number) {
    return number == 0 ? 32 : __builtin_clz(number);
}

int main() {
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Number of leading zeros: %d\n", countLeadingZeros(number));
    return 0;
}
