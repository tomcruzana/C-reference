#include <stdio.h>

//gets function
char *ins = "Pls enter some texts"; 
char dilemma[10];

main (){
	puts(ins);
	gets(dilemma); //diff with scanf("%d", var);
	printf("You entered: %s", dilemma);
	
}
