#include <stdio.h>

int main(int theNumber) {
  // i is the potential prime number
  int i;
  for (i = 2; i < 100; i++) {
    int j = 2;
    int prime = 1;
    while (prime != 0 && j<i) {
      // Check if any number under the potential prime divides evenly
      // If this is so, change "prime" to 0 (meaning false)
      if (i % j == 0)
	prime = 0;
      j++;
    }
    // If the potential prime is still a prime at this point, print it
    if (prime == 1)
      printf("%d\n",i);
  }
}
