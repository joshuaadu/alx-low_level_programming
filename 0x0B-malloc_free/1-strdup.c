#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string to a newly allocated space in memory,
 *
 * @str: pointer to the string given as a parameter
 *
 * Return: a pointer to a newly allocated space in memory
 * NULL if str = NULL
 *
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	/*printf("length of string: %d\n", i);*/

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for ( ; j < i; j++)
		s[j] = str[j];

	return (s);
}
