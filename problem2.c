#include <stdio.h>

int main() {
  int sum;
  int term;
  int prevTerm = 1;
  for (term = 1; term < 4000000; term+=prevTerm) {
    if (term % 2 == 0) {
      sum += term;
    }
    prevTerm = term;
  }
  printf("%d\n", sum);
  return sum;  
}
