//spaghetti code goto statement
#include <stdio.h>

void main(void){
	int x;
start: ;
	puts("Pls enter a single text");
	scanf("%d", &x);
	

	if	(x < 0 || x > 10)
		goto start;
	else if (x == 1)
		goto location1;

		
location1:;
	puts("you entered 1");
	goto start;
}
