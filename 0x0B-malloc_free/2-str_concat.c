#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to the string given as a parameter
 * @s2: pointer to the string given as a parameter
 *
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 *
 * NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/*printf("length of s1: %d\n", len1);*/
	/*printf("length of s2: %d\n", len2);*/

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);

	}
	for ( ; j < len1; j++)
		s[j] = s1[j];
	for ( ; i <= len2; i++, j++)
		s[j] = s2[i];
	/*printf("Copied string: %s\n", s)*/
	return (s);
}
