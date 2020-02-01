#include <stdio.h>

int folders[6];
int counter = 1;


int main(void){
	
	for (; counter < 6; counter++){
		printf("Assign a value to folder number %i \n", counter);
		scanf("%i", &folders[counter]);
	}
	
//printing the values that was assigned to the folder array
	for (counter = 1; counter < 6; counter++){ // ung value ng counter kailangan ibalik sa 1 para mag print eto.
		printf("value of folder %i is \t %i \n", counter, folders[counter]);
	}
		int total;
		total = folders[1] + folders[2] + folders[3] + folders[4] + folders[5];
		printf("\n\nTotal is:\t%i", total);
	
}
