#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    if (n == 0) return 32; // Special case for n = 0
    int count = 0;
    while ((n & 1) == 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("%d\n", countTrailingZeros(n));
    return 0;
}
