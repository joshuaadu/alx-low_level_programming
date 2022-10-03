#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 * @dest: pointer to destination character array
 * @src: ponter to source character array
 * @n: number of bytes
 *
 * Return: pointer to destination string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	i = 0;

	while (i < n && src[i])
		dest[len++] = src[i++];

	return (dest);
}
