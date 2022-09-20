#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	while (i--)
	{
		putchar(s[i]);
		i++;
	}

	putchar('\n');
}
