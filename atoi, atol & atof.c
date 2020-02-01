#include <stdio.h>
#include <stdlib.h> // we need this library for the functions

//function prototypes. Just for syntax clarity.
//int atoi(char *ptr);
//long atol(char *ptr);
//double atof(char *ptr);
// this will convert strings into integers. Note that the data type is int.
//--------------------------------------------------------------------------
//vars
char messageChar[80];

int messageInt;
long messageLong;
double messageDouble;

int main (void){
	
	//atoi func
	gets(messageChar);
	messageInt = atoi(messageChar); // the atoi func converts strings into ints
	printf("string to int converted: %i \n", messageInt);
	
	//atol func
	gets(messageChar);
	messageInt = atol(messageChar); // the atol func converts strings into long ints
	printf("string to long converted: %f \n", messageLong);
	
	//atof func
	gets(messageChar);
	messageDouble = atof(messageChar); // the atol func converts strings into doubles
	printf("string to double converted: %f \n", messageDouble);
}
