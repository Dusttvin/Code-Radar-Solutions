#include <stdio.h>

int main() {
    float radius, area;

    // Reading radius input
    scanf("%f", &radius);

    // Calculating the area of the circle
    area = 3.14 * radius * radius;

    // Printing the output
    printf("Area: %.2f\n", area);

    return 0;
}

