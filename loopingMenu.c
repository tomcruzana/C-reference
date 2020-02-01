#include <stdio.h>
int reply;
mainMenu(){
	puts("Pls choose an option:\n");
	puts("1\n2\n3\n4\n");
	scanf("%i", &reply);
	return reply;
}

int main(void){
	mainMenu();
	while (reply == 1 || reply == 2 || reply == 3 || reply == 4){
		mainMenu();
	}
}
