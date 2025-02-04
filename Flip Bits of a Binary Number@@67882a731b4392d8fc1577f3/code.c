#include <stdio.h>

int flipBits(int n) {
    return ~n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", flipBits(n));
    return 0;
}
