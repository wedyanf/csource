/********    myshell.c    ********/
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXLINE 80

int main()
{   char cmd[MAXLINE];
    void background(char *cmd);
    for (;;)
    {   printf("mysh ready%%");     /* Displays prompt       */
        fgets(cmd, MAXLINE, stdin); /* Reads command         */
        if ( strcmp(cmd,"exit\n") == 0 )
             return EXIT_SUCCESS;
        background(cmd);            /* Starts background job */
    }
    return EXIT_FAILURE;            /* Exits abnormally      */
}

#define WHITE "\t \n"
#define MAXARG 20

void background(char *cmd)
{   char *argv[MAXARG];
    int id, i = 0;
    /* To fill in argv */
    argv[i++] = strtok(cmd, WHITE);
    while ( i < MAXARG &&
            (argv[i++] = strtok(NULL, WHITE)) != NULL );
    if ( (id = fork()) == 0)   /* Child executes background job */
    {   execv(argv[0], argv);
        _exit(EXIT_FAILURE);  /* execv failed */
    }
    else if ( id < 0 )
    {   fprintf(stderr, "fork failed\n");
        perror("background:");
    }
}
