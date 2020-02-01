//modified by tom and gerald
#include<stdio.h>
#include<conio.h>
void main() {
   int total;
   int i, sigma = 0;
   int *ptr;
   
 
   scanf("%i", &total);
   int numArray[total];
   
   printf("\nEnter the elements : ");
   
   for (i = 0; i < total; i++)
      scanf("%d", &numArray[i]);
 
   ptr = numArray; /* a=&a[0] */
 
   for (i = 0; i < total; i++) {
      sigma = sigma + *(ptr + i);
      //or
      //printf( "*(p + %d) : %d\n", i, *(p + i));
      //ptr++; 
      
   }
 
   printf("sum off all elements : %d", sigma);
   getch();
}

//http://www.tutorialspoint.com/cprogramming/c_return_arrays_from_function.htm
