/********    simplefork.c    ********/
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{  pid_t child_id;
   child_id = fork();    /* process creation     */
   if ( child_id == 0 )  /* child code begin     */

   {   printf("Child: My pid = %d and my parent pid = %d\n",
              getpid(), getppid());
       _exit(EXIT_SUCCESS);         /* child terminates (i) */
   }                     /* child code end       */
   /* remaining parent code */
   if ( child_id < 0 ) 
   {   fprintf(stderr, "fork failed\n");
       exit(EXIT_FAILURE);
   }
   printf("Parent: My pid = %d, spawned child pid = %d\n", 
           getpid(), child_id);
   return EXIT_SUCCESS;
}
