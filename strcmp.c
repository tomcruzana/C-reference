#include <stdio.h>
#include <string.h>

char password[10] = "password1";
char userInput[10]; 
char resultString[15];
//error handler
int main()
{
	
	printf("Please enter your password:");
	gets(userInput);
	

	int result; //this result varialbe will be the error handler
	result = 	strcmp(password, userInput); // the result of strcmp will be assigned to the result var
	
	
		printf("The result is: %i", result); //if the result is 0 then the strings are  equal, else not equal.
}

// this functions will make the stings not case-sensitive. this will depend on you compiler

//stricmp and strcmpi
