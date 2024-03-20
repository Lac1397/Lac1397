#include <stdio.h>

int main() {
  FILE *even_file, *odd_file;
  int i;

  even_file = fopen("even_numbers.txt", "w");
  odd_file = fopen("odd_numbers.txt", "w");

  if (even_file == NULL || odd_file == NULL) {
    printf("Error opening files.\n");
    return 1;
  }

  for (i = 50; i <= 70; i++) {
    if (i % 2 == 0) {
      fprintf(even_file, "%d\n", i);
    } else {
      fprintf(odd_file, "%d\n", i);
    }
  }

  fclose(even_file);
  fclose(odd_file);

  printf("Even and odd numbers from 50 to 70 have been written to separate "
         "files.\n");

  return 0;
}
