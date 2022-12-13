#include "header.h"

/**
 * main - simple shell
 *
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Insufficient arguments\n");
		return (1);
	}
	++argv;
	if (execvp(argv[0], argv) == -1)
		perror("Error");

	return (0);
}
