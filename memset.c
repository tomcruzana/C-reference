#include <stdio.h>
#include <string.h>

float data[1000]; 

main(){
	int count;
	//using a loop
	for (count = 0; count < 1001; count++){
	data[count] = 0.0f;	
	}
	//using memset
	memset(&data,0,sizeof(data));

	//preview
	for (count = 0; count < 1001; count++){
		printf("Array %i: %f\n", count, data[count]);
	}		
	
}
