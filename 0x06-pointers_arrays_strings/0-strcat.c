#include <stdio.h>
#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: pointer to destination character array
 * @src: ponter to source character array
 *
 * Return: pointer to destination array
 *
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;
	int i, len;

	while (*d++ != '\0')
		;
	len = d - dest;

	for (i = 0; dest[len + i] = src[i]; i++)
		;
	d[len + i] = '\0';

	return (d);
}
