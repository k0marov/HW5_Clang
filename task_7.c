#include <stdio.h>

long long count_seq_without_triple_ones(int n) {
  long long dp[n > 4 ? n : 4]; 
  dp[0] = 1; dp[1] = 2; dp[2] = 4; dp[3] = 7; 
  for (int i = 4; i <= n; ++i) {
    dp[i] = dp[i-1]*2-dp[i-4];
  }
  return dp[n]; 
}

int main() {
  int n; 
  scanf("%d", &n); 
  printf("%lld\n", count_seq_without_triple_ones(n));
  return 0;
}
