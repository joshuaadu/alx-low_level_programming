#include <stdio.h>

/**
 * main - prints all  arguments passed into it
 *
 * @argc: count of command line arguments
 * @argv: array of arguments
 *
 * Return: 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
		printf("%s\n", *argv++);

	return (0);
}
