#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if(x >= 'a' && x <= 'z'){
        printf("Lowercase");
    }
    else if(x>='A' && x<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}