#include <stdio.h>

int main() {
    int N;
    
    // Take the number of rows as input
    scanf("%d", &N);
    
    // Outer loop for rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing stars in a row
        printf("\n");
    }
    
    return 0;
}