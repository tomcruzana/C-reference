#include <stdio.h>

main(){
	
	int x = 10;
	int y = 12;
	int add = x + y;
	printf("%i\n", add);
	int subs = x - y;
	printf("%i\n", subs);
	int multiply = x * y;
	printf("%i\n", multiply);
	float div = x / y;
	printf("%.2f\n", div);
	
	//increment and decrement
	
	int increment = ++x;
	printf("%i\n", increment);
	int decrement = --y;
	printf("%i\n\n", decrement);
	
	
	//logical operator examples
	
	int a = 9;
	int b = 7;
	
	printf("%i \n", (a>=b));
	printf("%i \n", (a==b));
	printf("%i \n", (a&&b)); // both bits are true. AND logic operator
	printf("%i \n", (a||b));// OR gate only requires one bit to be true. in this case, both bits are true.
	printf("%i \n", (a>b));
	// --------------^ this is the format that we use.
	getch();
	
	
}
