#include <stdio.h>

int main()
{
   char str[50];

   printf("Enter a string : ");
   gets(str); //as you can see the gets is like scanf. often times, it's used in strings.

   printf("You entered: %s", str);

   return(0);
}
