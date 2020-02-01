#include <stdio.h>
#include <string.h>

//strcat concatenates

char first[8] = "Thomas ";
char last[6] = "Mills";

main(){
	strcat(first,last);
	
	printf("%s", first);// first is the source string. Hence the last string will be added to it.
}
