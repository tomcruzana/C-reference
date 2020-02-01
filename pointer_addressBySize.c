#include <stdio.h>
//this  program will determine the size of each array element by computing the gaps between each mem addresses.

int array[10], counter;
float arrayF[10];
double arrayD[10];

int main(void){
	for (counter = 1; counter <=10; counter++)
		printf("number:%d \t%d \t%d \t%d\n", counter, &array[counter], &arrayF[counter], &arrayD[counter]); 
		//memory addresses
	
}

//Note: as my book states, some machines use different size of variable types. In my book, it's 2 bytes per integer. In my machine
//it's 4 bytes per integer.
