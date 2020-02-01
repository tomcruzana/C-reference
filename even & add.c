#include<stdio.h>
int num;
void main(void)
{
	
//logic
scanf("%i", &num);
solution2(); // try switcing gundtion and see the results. solution 2 enabled by default
}


solution1(){
if (num%2 == 0) //modulus. 
puts("even");
else
puts("odd");
}

solution2(){
if ((num/2)*2 == num)	//add brackets bec there's a heirarchy of operation
puts("even");
else
puts("odd");
}

/* explanation:
In c programming language when we divide two integers we get an integer result,
 For example the result of 7/3 will be 2.So we can take advantage of this and may
  use it to find whether the number is odd or even. Consider an integer n we can 
  first divide by 2 and then multiply it by 2 if the result is the original number
   then the number is even otherwise the number is odd. For example 11/2 = 5, 5*2 = 10 ( which is not equal to eleven), now consider 
12/2 = 6 and 6 *2 = 12 ( same as original number). These are some logic which may help you in finding if a number is odd or not.
*/
