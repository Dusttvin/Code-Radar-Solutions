#include <stdio.h>

int main() {
    char word[100]; // Declare a character array to store the string

    // Read a single word (string) from the user
    scanf("%s", word);

    // Print the entered string
    printf("You entered: %s\n", word);

    return 0;
}