#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to be converted
 *
 * Return: number or If there are no numbers in the string,
 * the function must return 0
 *
 */

int _atoi(char *s)
{
	int i, j, sign = 1;
	unsigned int n = 0;

	for (i = 0; (j = s[i]) != '\0'; i++)
	{
		if (j == '-')
			sign *= -1;

		else if (j >= '0' && j <= '9')
			n = (n * 10) + (j - '0');

		else if (n > 0)
			break;
	}

	return (n * sign);
}
