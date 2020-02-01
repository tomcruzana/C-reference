#include <stdio.h>
#include <stdlib.h>

char *message = "Pls enter 1 to exit";
cleanUp(){
	puts("Exiting the program please wait");
	system("color A4");
	getch();
}

void main(void){
	int reply;
	puts(message);
	
	scanf("%i", &reply);
		if (reply == 1)
			atexit(cleanUp);
}
