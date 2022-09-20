#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 */

void rev_string(char *s)
{
	int i, j, half;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	half = i / 2;

	for (j = 0; j < half; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}

}
