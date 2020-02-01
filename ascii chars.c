#include <stdio.h>

//this will print the ASCII of its equivalent numeric data

int main(void){
	unsigned char y; // for standard ascii
	unsigned char x; // this must be unsigned, or else we will have an endless loop.
	
	for (y = 1; y < 179; y++){
	printf("\t %c \t %d \n",y,y); // fuck this shit. 
	}
	for (x = 180; x < 255; x++){
		printf("\t %c \t %d \n",x,x);
	}
}
