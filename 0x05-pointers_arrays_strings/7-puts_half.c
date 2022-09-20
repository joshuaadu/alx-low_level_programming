#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 *
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: pointer to the string
 *
 */

void puts_half(char *str)
{
	int i, j, half;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		half = i / 2;
	else
		half = (i - 1) / 2;

	for (j = half; j <= i; j++)
	{
		putchar(str[j]);
	}

}
