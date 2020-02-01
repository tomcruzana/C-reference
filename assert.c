#include <stdio.h>
#include <assert.h> //library that contains the assert macro. 
int main(void)
{
int num;
puts("Please enter a value:\n");
scanf("%d", &num);

assert(num); // enter a non-zero value to activate the assert macro
printf("You entered: %d", num);
}

/*
assert is a macro which is useful to check certain conditions at run time (when the program is under execution) and is very useful while debugging a program. To use it you must include the header file "assert.h" in your program.

Declaration: void assert(int expression);

Expression is any valid c language expression, mostly it's a condition. In the example we divide two integers or calculate a/b and you know that b can't be zero so we use
assert( b != 0) in our program if this condition b != 0 holds true then the program execution will continue otherwise it is terminated and an error message is displayed on screen displaying filename, line number, function name, condition which does not hold true(see image below).

C programming code
#include <stdio.h>
#include <assert.h>
 
int main() {
  int a, b;
 
  printf("Input two integers to divide\n");
  scanf("%d%d", &a, &b);
 
  assert(b != 0);
 
  printf("%d/%d = %.2f\n", a, b, a/(float)b);
 
  return 0;
}
*/


