#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   /* copy str1 into str3 */
   strcpy(str3, str1); //strcpy(destination of string first, second is the source string);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   return 0;
}

//Another examples:

/* 
//STRLEN
#include <stdio.h>
#include <string.h>
char str[5] = "poop"; //in this case, we used an array. We can also use a pointer and assign string to it. ex: char *str
int len; //this like a counter for the length of the string
main(){
	len = strlen(str); // the parameter of strlen is the var/pointer name of the string. in this case it's str!
	printf("%d", len); // remember to use %d because it's an int/ numeric variable
}

//strcpy// note: there's also strncpy function, it copies a specific number of strings.
there's also strdup which is not a standard c library.

#include <stdio.h>
#include <string.h>
char src[10] = "Howdy!";
char dest[10]; // if you make this a pointer, you must allocate memory first by using the malloc function.
main(){
	strcpy(dest, src);
	printf("%s", dest);
}

//strcat

#include <stdio.h>
#include <string.h>

//strcat concatenates

char first[8] = "Thomas ";
char last[6] = "Mills";

main(){
	strcat(first,last);
	
	printf("%s", first);// first is the source string. Hence the last string will be added to it.
}

*/
