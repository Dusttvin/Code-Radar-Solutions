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
    unsigned int n;
    scanf("%u", &n);
    printf("%d\n", countLeadingZeros(n));
    return 0;
}
