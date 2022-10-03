#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 *
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		putchar(str[c]);
		c++;
	}

	putchar('\n');
}
