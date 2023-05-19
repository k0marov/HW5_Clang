#include <stdio.h>

// n needs to be even 
void swap_halves(int n, int a[n], int res[n]) {
  int middle = n/2; 
  for (int i = 0; i < n; ++i) {
    res[i] = i >= middle ? a[i-middle] : a[middle+i]; 
  }
}

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

int main() {
  int n; 
  scanf("%d", &n); 
  int a[n], b[n]; 

  scan_array(n, a); 
  swap_halves(n, a, b); 
  print_array(n, b);

  return 0;
}
