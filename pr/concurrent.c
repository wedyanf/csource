/********    concurrent.c    ********/
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define DIM 8

int main()
{   pid_t pid;
    int i, ans, arr[DIM]={1,2,3,4,5,6,7,8};
    pid = fork();
    if ( pid == 0 )  /* child code begin */
    {  ans = 0;
       for (i = 0 ; i < DIM ; i++)
       {   ans = ans + arr[i];
           printf("Child: sum = %d\n", ans);
	   sleep(1);
       }
       _exit(EXIT_SUCCESS);
    }                /* child code end   */
    if ( pid < 0 )
    {  fprintf(stderr, "fork failed\n");
       return EXIT_FAILURE;
    }
    ans = 1;
    for (i = 0 ; i < DIM ; i++)
    {   ans = ans * arr[i];
        printf("Parent: product = %d\n", ans);
	sleep(2);
    }
    return EXIT_SUCCESS;
}
