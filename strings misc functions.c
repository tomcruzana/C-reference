#include <stdio.h>
#include <string.h>
//function prototypes. this is not really needed but this is for code clarity. Here are the syntax of some of the ff misc string functions
char *strlwr(char *str);
char *strupr(char *str);
char *strrev(char *str);


main(){
	char message[80];
	gets(message);
	
	puts("__________________");
	//result
	puts(strlwr(message)); //converts to lower-case
	puts(strupr(message)); //converts to upper-case
	puts(strrev(message)); //reverses the strings
}

