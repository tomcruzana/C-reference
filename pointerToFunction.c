//pointer to function
#include <stdio.h>
//declare a function

float functionOne(float x){
	return x * x;
}

//declare a pointer function with the same argument

float (*ptr)(float x);

int main(void){
	//initialize the pointer to the function
	ptr = functionOne;
	
	printf("%f %f", functionOne(10), ptr(10));//both value are the same. these are the 2 ways on how to get the values. Either by using the pointer or the function 
}

