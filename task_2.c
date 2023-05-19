#include <stdio.h>

struct Person {
  int age; 
  char name[30]; 
};

float average_age(struct Person arr[], int n) {
  float sum = 0; 
  for (int i = 0; i < n; ++i) {
    sum += arr[i].age; 
  }
  return sum/n; 
}

void scan_array(int n, struct Person a[n]) {
  for (int i = 0; i < n; ++i) {
    scanf("%d %s", &a[i].age, a[i].name); 
  }
}

int main() {
  int n; 
  scanf("%d", &n); 
  struct Person a[n]; 

  scan_array(n, a); 
  printf("%f\n", average_age(a, n)); 

  return 0;
}
