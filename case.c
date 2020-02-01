#include <stdio.h>

main()
{
     char  Grade;
     puts("Enter your grade:\n");
     scanf("%c", &Grade);

     switch( Grade )
     {
        case 'A' : printf( "Excellent\n" );
                   break;
        case 'B' : printf( "Good\n" );
                   break;
        case 'C' : printf( "OK\n" );
                   break;
        case 'D' : printf( "Mmmmm....\n" );
                   break;
        case 'F' : printf( "You must do better than this\n" );
                   break;
        default  : printf( "Invalid response\n" );
                   break;
     }
}
