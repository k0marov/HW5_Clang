#include <stdio.h>

int gcd(int a, int b) {
  if (a == 0 || b == 0 || a % b == 0) {
    return b;
  }
  return gcd(b, a%b);
}

void reduce_fraction(int *a, int *b) {
  int gcd_ab = gcd(*a, *b);
  *a = *a/gcd_ab; 
  *b = *b/gcd_ab; 
}

int main() {
  int a, b; 
  scanf("%d %d", &a, &b); 
  reduce_fraction(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}
