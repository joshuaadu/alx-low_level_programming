#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: string to encode
 *
 * Return: string pointer
 *
 */

char *leet(char *s)
{
	int i = 0, j;
	char l[] = "AEOTL";
	char n[] = "43071";

	while (s[i])
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] - 32 == l[j])
				s[i] = n[j];
		}
		i++;
	}

	return (s);
}
