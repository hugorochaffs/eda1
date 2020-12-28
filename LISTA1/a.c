#include <stdio.h>


float pot(int a, int b) {

  if (b == 0) return 1;

  else {
    if (b > 0) {
      return a * pot(a, b - 1);
    } else {
      return (1 / (a * pot(a, ((b * -1) - 1))));
    }

  }

}

int main() {

  int a, b;

  scanf("%d %d", & a, & b);
  if (a > 0)
    printf("%lf\n", pot(a, b));
  else
    printf("indefinido\n");

  return 0;
}