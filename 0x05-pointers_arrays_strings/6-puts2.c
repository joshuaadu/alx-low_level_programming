#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character, 
 * followed by a new line
 * 
 * @str: pointer to the string
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(s[i]);
	}

	putchar('\n');
}
