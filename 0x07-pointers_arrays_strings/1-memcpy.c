#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to destination memory area
 * @src: pointer to src memory area
 * @n: number of memory locations to copy
 *
 * Return: pointer to destination memory 
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
