#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer value of comparing string values
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i  = j = 0;

	/**
	 * while (j == 0)
	 * {
	 * if ((s1[i] == '\0') && (s2[i] == '\0'))
	 * break;
	 * j = s1[i] - s2[i];
	 * printf("s1[%d] (%d) - s2[%d] (%d)  = %d\n", i, s1[i], i, s2[i], j);
	 * i++;
	 * }
	 */
	while ((*s1 && *s2) && (*s1 == *s2))
		s1++, s2++;
	return (*s1 - *s2);
}
