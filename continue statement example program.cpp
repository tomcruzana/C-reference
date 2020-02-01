#include <stdio.h>
char userInput[81];
int ctr;
main(){
	puts("Pls enter a text:\n");
	gets(userInput);
	
	{
	for (ctr = 1; userInput[ctr] != '\0'; ctr++)
		if (userInput[ctr] == 'a' || userInput[ctr] == 'b' || userInput[ctr] == 'c')
		continue;
		putchar(userInput[ctr]);
	}
}
