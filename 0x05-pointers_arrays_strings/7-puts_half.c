#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 *
 * @str: pointer to the string
 *
 */

void puts_half(char *str)
{
	int i, j, half;
	char temp;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;

	for (j = 0; j < half; j++)
	{
		putchar(str[j]);
	}

}
