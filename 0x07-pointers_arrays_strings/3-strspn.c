#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer of string
 * @accept: string to check
 *
 * Return: number of bytes in the initial segment
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[i]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
