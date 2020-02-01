#include <stdio.h>

// fputs nmn pre parang puts() rin kaso lng sa text file rin yung output hindi sa console
int main ()
{
   FILE *fp;

   fp = fopen("file.txt", "w+"); // "w+" write and update

   fputs("This is c programming.\n", fp); // write sa file
   fputs("This is a system programming language.", fp); // write sa file

   fclose(fp);

   return(0);
}

