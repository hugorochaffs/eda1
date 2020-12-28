#include <stdio.h>

int count = 0;
long int cont(long int a) {

  if (a == 0) return 0;
  else {

    if (a % 10 == 7) count++;
    return (cont(((a / 10))));

  }

}

int main() {

  long int a;

  scanf("%ld", & a);

  cont(a);
  printf("%d\n", count);

  return 0;
}