 /* EX2-4.C */
 #include <stdio.h>

 main()
 {
 int x = 10;
 int y;
 
 //y = x++; //postfix = after effect
 y = ++x; //prefix = before effect
 printf("%i", y);
 
 if(y == 11)
 printf("%i", y);
 return 0;
 } /* end of program */
