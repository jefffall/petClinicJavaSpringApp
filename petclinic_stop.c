#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* How to use:
   Make the execitable: gcc -o petclinic_stop petclinic_stop.c
   change the permissions: chown root:root petclinic_stop
   add priv:               chmod 4777 petclinic_stop */

int main( int argc, char *argv[] )  {
   char command[256] = "/usr/bin/systemctl stop petclinic";


   /* printf("\n"); */
   /* printf("%s\n",command); */
   setuid(0);
   system(command);
   return(0);
}
