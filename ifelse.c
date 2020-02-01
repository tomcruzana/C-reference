#include <stdio.h>
#include <stdlib.h>

//vars
int grade;


//funcs
inputFunc(){
	puts("Please enter your grade ranging from 0 to 100:");
	scanf("%i", &grade);
}

excellent(){
	puts("Your grade is A");
}

satisfactory(){
	puts("Your grade is B");
}

fail(){
	puts("Your grade is C");
}

main(){
	
inputFunc();

	if (grade <= 60){
		fail();
	}
	else if (grade <= 89){
		satisfactory();
	}
	else if ( grade <= 100){
		excellent();
	}

return EXIT_SUCCESS;
}
