#include <stdio.h>

void swap(int* a, int* b) {
  int tmp = *a; 
  *a = *b; 
  *b = tmp; 
}

// n needs to be even 
void swap_halves(int n, int a[n]) {
  int middle = n/2; 
  for (int i = 0; i < middle; ++i) {
    swap(a+i, a+i+middle);
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
  int a[n]; 

  scan_array(n, a); 
  swap_halves(n, a); 
  print_array(n, a);

  return 0;
}
