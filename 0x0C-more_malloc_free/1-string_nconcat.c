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
	unsigned int i, len, len2, lenT;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
		;

	for (len2 = 0; s1[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;
	lenT = len + n;
	str = malloc(sizeof(char) * (lenT + 1));

	if (str)
	{
		for (i = 0; i < lenT; i++)
			if (i < len)
				str[i] = s1[i];
			else
				str[i] = s2[i - len];
		str[i] = '\0';

		return (str);
	}
	return (NULL);
}
