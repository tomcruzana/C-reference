//this code will show you how to assign a pointer to an array, and use the fgets function to strictly limit the the number of chars/elements to be copied.

#include <stdio.h>

char movieTitle[20]; // array that has 20 elements
char *ptr_title = movieTitle; // A pointer that's assigned to an array. Dont use the & when assigning a pointer to an array

main()
    {
        puts("Enter a movie title:");

        fgets(ptr_title, 20, stdin);
            //pointer to the array, number of chars to be stored, input stream
        puts(ptr_title);
    }
