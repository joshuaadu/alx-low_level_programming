#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: the buffer pointer
 * @src: the string pointer
 *
 * Return: the pointer to @dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while ((j = src[i]) != '\0')
	{
		dest[i] = j;
		i++;
	}

	dest[i] = src[i];

	return (dest);
}
