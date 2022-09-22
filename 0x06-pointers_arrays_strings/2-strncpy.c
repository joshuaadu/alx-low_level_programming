#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: pointer to destination string
 * @src: ponter to source string
 * @n: number of bytes
 *
 * Return: pointer to destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
