#include <stdio.h>
#include <string.h>
char src[10] = "Howdy!";
char dest[10]; // if you make this a pointer, you must allocate memory first by using the malloc function.
main(){
	strcpy(dest, src);
	printf("%s", dest);
}
