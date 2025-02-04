#include <stdio.h>

int main() {
    int num, position = 0;
    scanf("%d", &num);
    
    // Loop to find the position of the lowest set bit
    while (!(num & 1)) {
        num >>= 1;
        position++;
    }
    
    printf("%d\n", position);
    
    return 0;
}
