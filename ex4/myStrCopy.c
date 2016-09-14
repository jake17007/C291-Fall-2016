#include <stdio.h>

char * mystrcpy(char *, char *);

char * mystrcpy(char * theDest, char * theSource) {

  int i;
  for (i = 0; *(theSource + i) != '\0'; i++) {
    
    // Set the value at the address "theDest + i" 
    // to the value at the address "theSource + i"
    *(theDest + i) = *(theSource + i);

  }

  // add the escapte character to the end of the new string
  *(theDest + i) = '\0';  

  return(theDest);
}

int main(void) {

  char dest[100];
  char src[] = "Test string\n";
  char *p;

  if (p = mystrcpy(dest,src)) {
    printf("%s\n",p);
    return(0);
  }
  else {
    printf("null pointer received\n");
    return(1);
  }

}


