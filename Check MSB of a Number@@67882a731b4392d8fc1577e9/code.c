#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    // Check MSB (31st bit for 32-bit integer)
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
