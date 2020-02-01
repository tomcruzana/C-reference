#include<stdio.h>
#include<stdlib.h>

// fprintf example
// ang fprintf men parang printf rin kaso lng sa textfile yung output hindi sa console

int main()
{
   FILE *file;

   file = fopen ("file.txt", "w+"); // w+ ibig sbihin write and update sa file na ang pangalan file.txt
                                    // kung wala pang file.txt na nag eexist gagawa sya automatic sa directory din nitong source code na to

   fprintf(file, "%s %s %s %d", "We", "are", "in", 2012); // itong line na to argument nya is yung file pointer na ang pangalan "*file" na nka point sa file.txt
                                                          // isipin mo lng imbes na sa console yung output sa file na yung output kya pag inopen mo yung file.txt
                                                          // We are in 2012 na nkalagay
   fclose(file); // ito close nya lng yung file

   return(0);
}

