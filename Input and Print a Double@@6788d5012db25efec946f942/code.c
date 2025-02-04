#include <stdio.h>

int main() {
    double num;
    
    // Taking a double-precision floating-point number as input
    scanf("%lf", &num);
    
    // Printing the number in the desired format
    printf("You entered: %.4f\n", num);
    
    return 0;
}
