#include <stdio.h>

int var = 10;
int *ptr;



main(){
	ptr = &var;
	
	printf("\n%i", var);
	printf("\n%d", *ptr);	
	
	//address
	printf("\n%d", ptr);
	printf("\n%d", &var);	
return 0;
}
