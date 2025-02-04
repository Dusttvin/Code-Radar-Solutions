#include <stdio.h>

int main() {
    int num, pos, result;
    scanf("%d %d", &num, &pos);
    
    result = num & ~(1 << pos);
    
    printf("%d\n", result);
    
    return 0;
}
