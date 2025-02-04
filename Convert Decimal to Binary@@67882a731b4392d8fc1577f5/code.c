#include <stdio.h>

void decimalToBinary(unsigned int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n & 1;
        n >>= 1;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    unsigned int n;
    scanf("%u", &n);
    decimalToBinary(n);
    return 0;
}
