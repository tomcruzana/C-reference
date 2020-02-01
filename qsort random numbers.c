#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define TOTAL_NUMBER 6

//function prototypes
void seed_generator(void); 
int get_rand_in_range(int from, int to); 

compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
//
int main(void) { 
int i; 
int selected[TOTAL_NUMBER]; 
seed_generator();



for(i = 0; i < TOTAL_NUMBER; i++) 
selected[i] = get_rand_in_range(1, 49); 
qsort(selected, TOTAL_NUMBER, sizeof(int), compare); // qsort
for(i = 0; i < TOTAL_NUMBER; i++) 


printf("%i\t", selected[i]); 

printf("\n"); 
return 0; 


} 

//functions

int get_rand_in_range(int from, int to){

int min = (from > to) ? to : from; 
return rand() % abs(to - from + 1) + min; 
} 
 

void seed_generator(void) { 
time_t now; 
now = time(NULL); 
srand((unsigned)now); 
}

