#include <stdio.h>

int main() {
  int num1, num2;

  // Input two integers
  scanf("%d %d", &num1, &num2);

  // Check if both numbers are greater than or equal to 5
  if (num1 >= 5 && num2 >= 5) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}