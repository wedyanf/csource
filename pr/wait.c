/********    wait.c    ********/
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{   pid_t pid1, pid2, pid;
    int status;
    if ((pid1 = fork()) == 0)   /* child one */
    {   printf("child pid=%d\n", getpid());
        _exit(EXIT_SUCCESS);
    }
    printf("forking again\n");
    if ((pid2 = fork()) == 0)   /* child two */
    {    printf("child pid=%d\n", getpid());
         _exit(EXIT_FAILURE);
    }
    printf("first wait\n");
    pid = wait(&status);
    printf("pid=%d, status=%d\n", pid, WEXITSTATUS(status));
    printf("2nd wait\n");
    pid = wait(&status);
    printf("pid=%d, status=%d\n", pid, WEXITSTATUS(status));
    return EXIT_SUCCESS;
}
