#include <stdio.h>

int main() {
    int testCases;
    printf("Enter the number of test cases: ");
    scanf("%d", &testCases);

    for (int t = 1; t <= testCases; t++) {
        printf("Test Case #%d:\n", t);
        int rows = t;

        for (int i = 1; i <= rows; i++) {
            for (int j = i; j < rows; j++) {
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
