#include <stdio.h>

int main() {
    int num, pos, bit;
    scanf("%d %d", &num, &pos);
    
    bit = (num >> pos) & 1;
    
    printf("%d\n", bit);
    
    return 0;
}
