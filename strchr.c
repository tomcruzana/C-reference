#include <stdio.h>



char *strchr(char *string, int c); // function prototype. This is the format. Program will also work without this.

int main() {
  char *s;
  char buf [] = "This is a zesp";

  s = strchr (buf, 'T'); // main formula/syntax of strchr. s is a pointer and the result will be assigned to it.

  if (s != NULL)
    printf ("found a 't' at %s\n", s);

  return 0;
}
