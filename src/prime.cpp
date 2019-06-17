
#include <iostream>
#include <math.h>
#include <ctime>

int isPrime(long num) {
  if(num == 2) {
    return 1;
  }
  double limit = sqrt(num);
  for(int i = 2; i <= limit; i++ ) {
    if(num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  long num = 30000000;
  int maxed = 0;
  clock_t start_time = clock();
  for(long i = num - 1; i > 2; i--) {
    if(isPrime(i) == 1 && maxed == 0) {
      printf("max prime is: %ld\n", i);
      maxed = 1;
    }
  }
  printf("time is....%f s\n", (double)(clock() - start_time) / CLOCKS_PER_SEC);
  return 0;
}