//defining basic structures
//structure are collection of one or more variables
//vars are grouped in a single name for easy manipulation
#include <stdio.h>
//structure w/out an instance is called a structure template
struct structure{
	int var1;
	int var2;
};

struct structure instanceStruct;

//structure w an instance
struct structure2{
	int var3;
	int var4;
} instance;

//initializing structures.
struct Woman{
	int vagina;
	int boobs;
	char surName[4];
} Jane = {1,2,"tar"};
main(){
	printf("%i %i %s", Jane.vagina, Jane.boobs, Jane.surName);
}


