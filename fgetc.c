#include <stdio.h>

// fgetc() example
// ang fgetc() pre ireread nya nmn by character yung nasa loob ng file
// dpat meron ng file.txt na ng eexist kasi yun ang ireread nya

int main ()
{
   FILE *fp;
   char c;

   fp = fopen("file.txt","r"); // "r" ibig sabihin read nya lng yung file

   while(1) // while 1 ibig sabihin while true
   {
      c = fgetc(fp); // ilalagay yung character na nread nya sa variable na c

      if( feof(fp) ) // kpag lahat na nang character na read nya, break nya na yung loop
      {
          break ;
      }

      printf("%c", c); // print yung nread na character sa console
   }
   fclose(fp);
   return(0);
}

