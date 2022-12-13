#include "header.h"

/**
 * main -prints "$ ",
 * wait for the user to enter a command, prints it on the next line
 *
 * Return: 0
 */

#define MAXLEN 64

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	
	printf("$ ");

	do
	{
		nread = getline(&line, &len, stdin);
		if (nread)
			printf("%s", line);

	} while (nread > 0);
	
	free(line);
	return (0);
}
