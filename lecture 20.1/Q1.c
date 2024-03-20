#include <stdio.h>
#include <string.h>

int main(void) {
  int len = 0;
  char str[100];

  printf("Enter a string: ");
  scanf("%[^\n]s", str);

  char *ptr = str;

  while (*ptr != '\0') {
    len++;
    ptr++;
  }

  printf("The length of the string is %d", len);
  return 0;
}