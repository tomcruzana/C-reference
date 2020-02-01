//loops
#include <stdio.h>



int main(void){ // enable one fuction and check the results
	
	forLoopz();
//	doWhileLoop();
//	whileLoop();

}

forLoopz(){
	int i;
	for (i = 1; i < 101; i++) //initializer, condition, counter
	printf("%i \n", i);
}

doWhileLoop(){
	int i = 1;
	do{
		printf("beep \a\n");
	} while( i = 1);
}

whileLoop(){
	int i;
	while( i = 1){
		puts("looping!\n");
	}
}
