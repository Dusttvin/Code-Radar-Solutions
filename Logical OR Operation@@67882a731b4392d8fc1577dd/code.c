#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20, num3 = 30;

  // Check if num1 is greater than 15 or num2 is less than 25.
  if (num1 > 15 || num2 < 25) {
    printf("At least one condition is true.\n");
  } else {
    printf("Both conditions are false.\n");
  }

  // Check if num1 is equal to num2 or num3 is equal to num1.
  if (num1 == num2 || num3 == num1) {
    printf("At least one condition is true.\n");
  } else {
    printf("Both conditions are false.\n");
  }

  return 0;
}