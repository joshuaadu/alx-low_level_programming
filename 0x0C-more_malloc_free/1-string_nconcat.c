#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the first nuber of bytes of s2
 *
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	str = malloc(sizeof(*s1) + sizeof(*s2) + 1);
	if (str)
	{
		for (i = 0; str[i] = *s1++; i++)
			;
		while (n-- > 0 && *s2)
			str[i++] = *s2++;
		str[i] = '\0';

		return (str);
	}
	return (NULL);
}
