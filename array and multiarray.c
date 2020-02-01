# include <stdio.h>
#define MAX 6
int a,b; //counters
//2 dim arrays
int multiArray[2][3] = {{1,2,3}, {100,500,600}}; 

int main(void){
	
	int boomArray[MAX] = {1,2,3,4,5,6};
	//					  0 1 2 3 4 5
	boomArray[4] +=2;
	
	printf("boomArray[5] is now %i\n", boomArray[4]);
	
	multiFunc();
	 
}

multiFunc(){
	
	
	for (a = 0; a < 2; a++){
		for (b = 0; b < 3; b++){
		printf("%i \n", multiArray[a][b]);
		}
	}
}
