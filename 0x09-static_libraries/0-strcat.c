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
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	i = 0;

	while ((dest[len++] = src[i++]))
		;
	return (dest);
}
