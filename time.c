//this program will return the seconds elapsed since January 1, 1970
#include <stdio.h>
#include <time.h>
int main ()
{
    time_t sec; //time_t is a synonym or a typedef for long in time.h header 
    sec = time (NULL);

    printf ("Number of hours since January 1, 1970 is %ld \n", sec/3600);
    return 0;
}

