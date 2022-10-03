#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer of string
 * @c: the character to find its first occurrence
 *
 * Return: pointer to first occurence of c or
 * Null if not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
