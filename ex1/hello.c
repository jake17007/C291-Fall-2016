/* main.c --- 
 *
 * Filename: main.c
 * Description: Basic C program to print out hello world 
 * Author: Jacob Beauchamp
 *
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
  int i = 0;
  while (i < 1) {
    printf("Hello, world\n");
    sleep(3);
  } 
  return(0);
}
