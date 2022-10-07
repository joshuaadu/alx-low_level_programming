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
	unsigned int i, len;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
		;

	str = malloc(sizeof(char) * (len + n + 1));

	if (str)
	{
		len = 0;
		for (i = 0; s1[i]; i++)
			str[len++] = s1[i];

		for (i = 0; s2[i] && (i < n); i++)
			str[len++] = s2[i];
		str[i] = '\0';

		return (str);
	}
	return (NULL);
}
