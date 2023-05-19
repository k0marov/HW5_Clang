#include <stdio.h>

struct Move {
  int x; 
  int y; 
};

void scan_array(int n, struct Move a[n]) {
  for (int i = 0; i < n; ++i) {
    scanf("%d %d", &a[i].x, &a[i].y); 
  }
}

struct Move get_finish_point(struct Move a[], int n) {
  struct Move res = {0, 0}; 
  for (int i = 0; i < n; ++i) {
    res.x += a[i].x; 
    res.y += a[i].y; 
  } 
  return res; 
}

int main() {
  int n; 
  scanf("%d", &n); 
  struct Move a[n]; 

  scan_array(n, a); 
  
  struct Move finish_point = get_finish_point(a, n); 
  printf("%d %d\n", finish_point.x, finish_point.y); 

  return 0;
}
