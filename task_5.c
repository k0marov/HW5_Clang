#include <stdio.h>

void scan_array(int n, int m, int a[n][m]) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
	    scanf("%d", &a[i][j]);
    }
  }
}

void print_array(int n, int m, int a[n][m]) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

void swap_cols(int n, int m, int a[n][m], int col1, int col2) {
  for (int i = 0; i < n; ++i) {
    int tmp = a[i][col1]; 
    a[i][col1] = a[i][col2]; 
    a[i][col2] = tmp; 
  }
}

int main() {
  int n, m; 
  scanf("%d %d", &n, &m);
  int a[n][m];  
  scan_array(n, m, a);
  
  int max_sum = 0, max_ind = -1, min_sum=0, min_ind=-1;
  for (int j = 0; j < m; ++j) {
    int sum = 0; 
    for (int i = 0; i < n; ++i) {
      sum += a[i][j]; 
    }
    if (max_ind == -1 || sum > max_sum) {
      max_ind = j; 
      max_sum = sum; 
    } 
    if (min_ind == -1 || sum < min_sum) {
      min_ind = j; 
      min_sum = sum; 
    }
  }

  swap_cols(n, m, a, min_ind, max_ind); 

  print_array(n, m, a);

  return 0;
}
