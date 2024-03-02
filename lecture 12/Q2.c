#include <stdio.h>

int main() {
  int rows = 5;

  for (int i = 1; i <= rows; i++) {
    int num = i + 10;

    for (int j = 1; j <= i; j++) {
      printf("%d ", num);
      num++;
    }

    printf("\n");
  }

  return 0;
}