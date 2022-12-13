#include "header.h"

/**
 * main - prints all the arguments, without using ac
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (argv[i++])
	{
		printf("%s\n", *argv);
	}
	return (0);
}
