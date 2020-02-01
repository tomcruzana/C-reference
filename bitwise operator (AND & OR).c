#include <stdio.h>


// bitwise operator example
int main(void){

    int a = 60;
    int b = 13;
    int c = 0;

    /*
     * ang gagawin pre ng compiler kukunin nya nung binary value ng variable
     * for example 60 = 0011 1100 at ang 13 = 0000 1101 tpos iaapply nya yung operator every bits
     * 128 64 32 16 8 4 2 0
     *
     *  ito yung truth tables ng
     *
     *  | p | q | p & q | p | q | p ^ q
     *    0   0     0       0       0
     *    0   1     0       1       1
     *    1   1     1       1       0
     *    1   0     0       1       1
     */

    c = a & b;

    /*   a & b
     *   a = 0011 1100
     *   b = 0000 1101
     *       ---------
     *  12 = 0000 1100
     *
     */

    printf("a & b = %i\n", c);

    c = a | b;

    /*  a | b
     *  a  = 0011 1100
     *  b  = 0000 1101
     *       ---------
     *  61 = 0011 1101
     *
     */

    printf("a | b = %i", c);


}
