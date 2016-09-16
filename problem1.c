#include <stdio.h>

int main() {
  int ctr;
  int sum;
  for (ctr = 0; ctr < 1000; ctr++) {
    if (ctr % 3 == 0 || ctr % 5 == 0) {
      sum += ctr;
    }
  }
  printf("%d\n", sum);
  return sum;
}
