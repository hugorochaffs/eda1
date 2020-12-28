#include <stdio.h>


void printa(char str[]) {

  if ( * str) {
    printa(str + 1);
    printf("%c", * str);

  }
}

int main() {

  char str[500];

  scanf(" %s", str);

  printa(str);
  printf("\n");

  return 0;
}