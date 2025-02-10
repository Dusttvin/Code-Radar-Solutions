#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int t = 1; t <= testCases; t++) {
        for (int i = 1; i <= t; i++) {
            for (int j = i; j < t; j++) {
                printf(" ");
            }
            for (int k = 1; k <= (2*i-1); k++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

