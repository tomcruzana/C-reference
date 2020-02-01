#include <stdio.h>

//fgets example
// ang fgets nmn men ililipat nya yung mga character sa character array, at kailangan nya kung ilang character ang ilalagay nya
// sa example na ito is 60 characters na nasa file ang ireread nya at ililipat na sa str[]

int main()
{
   FILE *fp;
   char str[60];

   /* opening file for reading */
   fp = fopen("file.txt" , "r");

   // ito kapag wala pang file.txt na nag eexist print sya ng error message
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }

   // fgets (str, 60, fp) yung str is the character array at 60 yung size ng character na ilalagay sa str at fp nmn is yung source file na ireread
   if( fgets (str, 60, fp)!=NULL ) {
      /* writing content to stdout */
      puts(str);
   }
   fclose(fp);

   return(0);
}

