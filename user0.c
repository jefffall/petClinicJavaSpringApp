#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* How to use:
   Make the execitable: gcc -o user0 user0.c
   change the permissions: chown root:root user0
   add priv:               chmod 4777 user0 */

int main( int argc, char *argv[] )  {
   char command[256] = "";

   int i;
   for ( i = 1; i < argc; ++i ) {
                        /* printf( "  %d. %s\n", i, argv[i] ); */
                        strcat(command, argv[i]);
                        strcat(command, " ");
                }

   /* printf("\n"); */
   /* printf("%s\n",command); */
   setuid(0);
   system(command);
   return(0);
}
