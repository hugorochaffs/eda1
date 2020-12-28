#include <stdio.h>


long int sum(long int a) {

  if (a == 0) return 0;
  else {
    return (a % 10 + sum(a / 10));

  }

}

int main() {

  long int a;

  scanf("%ld", & a);

  printf("%ld\n", sum(a));

  return 0;
}