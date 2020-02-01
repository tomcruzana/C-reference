#include <stdio.h>

//shorthand if and else statement

int numOffriends;

void main(void)
    {
        printf("Please enter the number of your friends:\n");
        scanf("%i", &numOffriends);
        //shorthand if & else

        (numOffriends == 0) ? printf("Sucks to you") : printf("Cool");

        return 0;
    }
