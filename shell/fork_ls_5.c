#include "header.h"

/**
 * main - executes the command ls -l /tmp in 5 different child processes
 *
 */

int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
	int pid2 = fork();
	printf("My pid: %d\n", getpid());
	if (pid2 == 0)
		;
	else 
	{
		fork();
		
		printf("My pid: %d\n", getpid());
	}


	return (0);
}
