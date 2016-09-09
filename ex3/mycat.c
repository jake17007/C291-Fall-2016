#include <stdio.h>
#include <string.h>

int main() {
  char dest_buffer[100];
  char str1[] = "Hello";
  char str2[] = "World";
  
  void mycat(int n) {
    // Copy the first string into the buffer (up to n)
    strncpy(dest_buffer, str1, n);

    // If n has not been exhausted by the first string,
    // copy the second string up to n
    if (n > (sizeof(str1) - 1)) 
	strncat(dest_buffer, str2, n-(sizeof(str1)-1));

    // Print the result
    printf("%s",dest_buffer);
  }
  
  // Test 1
  printf("Test of mycat(0): ");
  mycat(0);
  printf("\n");

  // Test 2
  printf("Test of mycat(1): ");
  mycat(1);
  printf("\n");

  // Test 3
  printf("Test of mycat(5): ");
  mycat(5);
  printf("\n");

  // Test 4
  printf("Test of mycat(6): ");
  mycat(6);
  printf("\n");

  // Test 5
  printf("Test of mycat(10): ");
  mycat(10);
  printf("\n");

  // Test 6
  printf("Test of mycat(50): ");
  mycat(50);
  printf("\n");

}

