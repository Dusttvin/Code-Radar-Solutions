#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Taking three integers as input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0;

    // Printing the average
    printf("Average: %.2f\n", average);

    return 0;
}
