#include <stdio.h>

unsigned int setNthBit(unsigned int number, int position) {
    return number | (1 << position);
}

int main() {
    unsigned int number;
    int position;
    scanf("%u %d", &number, &position);
    printf("%u\n", setNthBit(number, position));
    return 0;
}
