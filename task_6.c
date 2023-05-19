#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void scan_array(int n, int a[n]) {
  for (int i = 0; i < n; ++i) {
	  scanf("%d", &a[i]);
  }
}

void print_array(int n, int a[n]) {
  for (int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int abs_arr(int a[], int n) {
  int changed = 0; 
  for (int* p = a; p < a+n; ++p) {
    if (*p < 0) {
      ++changed;
      *p = abs(*p);
    }
  }
  return changed;
}

int main() {
  int n; 
  scanf("%d", &n);
  int a[n];  
  scan_array(n, a);
  
  int changed = abs_arr(a, n); 
  printf("%d ", changed);
  print_array(n, a);

  return 0;
}
