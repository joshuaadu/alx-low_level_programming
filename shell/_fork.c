#include "header.h"

int main(void)
{
    int id = fork();
    int n, status;

    if (id == 0)
        n = 1;
    else
        n = 6;

    if (id != 0)
        wait(&status);

    fork();
    
    int i;
    for (i = n; i < n + 5; i++)
    {
        printf("%d", i);
        fflush(stdout);
    }

    if (id != 0)
        printf("\n");


    return (0);
    /*
    pid_t my_pid;
    pid_t pid;

    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
    */
}