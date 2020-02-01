//opens a txt file
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){

FILE *fp;
	char filename[80];
	
	printf("Enter the file name of the file:\n");
	gets(filename);
	
	if ((fp = fopen(filename, "r")) == NULL)
		{
			perror("You goofed!");
			printf("errno = %d", errno);
		}
		else
		{
			puts("File opened for reading");
			fclose(fp);
		}
}
