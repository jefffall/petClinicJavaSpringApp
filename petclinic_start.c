#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* How to use:
   Make the execitable: gcc -o petclinic_start petclinic_start.c
   change the permissions: chown root:root petclinic_start
   add priv:               chmod 4777 petclinic_start */

int main( int argc, char *argv[] )  {
   char command[256] = "/usr/bin/systemctl start petclinic";


   /* printf("\n"); */
   /* printf("%s\n",command); */
   setuid(0);
   system(command);
   return(0);
}
