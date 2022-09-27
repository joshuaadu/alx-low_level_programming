#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory location to fill
 * @b: the constant byte to fill *s
 * @n: number of bytes of the memory area pointed to by s
 *
 * Return: pointer to memory locations
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}
