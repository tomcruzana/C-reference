#include <stdio.h>

// ang fputc() nmn men is iwwrite nya yung file character by character

int main ()
{
   FILE *fp;
   int ch;

   fp = fopen("file.txt", "w+");

   for( ch = 33 ; ch <= 100; ch++ )
   {
      // ang ilalagay nya sa file yung ascii character na equivalent ng variable kasi ang datatype ng ch is integer
      // eh ang argument ng fputc is int fputc(int char, FILE *stream) ky ayung integer automatic iccast nya sa character
      fputc(ch, fp);
   }
   fclose(fp);

   return(0);
}

