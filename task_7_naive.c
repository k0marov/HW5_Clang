#include <ctype.h>
#include <stdio.h>

int no_three_adjacent_ones(int x, int n) {
  for (int one_place=0; one_place < n; ++one_place) {
    int three_ones = 7<<one_place; // since 7 is 111 in binary
    if ((x & three_ones) == three_ones) {
      return 0;
    }
  }
  return 1; 
}

int main() {
  int n; 
  scanf("%d", &n); 
  long long res = 0; 
  for (int x = 0; x < 1<<n; ++x) {
    if (no_three_adjacent_ones(x, n)) ++res; 
  }
  printf("%lld\n", res);
  return 0;
}
