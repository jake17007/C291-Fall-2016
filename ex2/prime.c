#include <stdio.h>

int main(int theNumber) {
  // i is the potential prime number
  int i;
  for (i = 2; i < 100; i++) {
    int j = 2;
    int prime = 1;
    while (prime != 0 && j<i) {
      
      if (i % j == 0)
	prime = 0;
      j++;
    }
    if (prime == 1)
      printf("%d\n",i);
  }
}
