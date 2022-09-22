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
	int len = 0;

	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			break;
		}
		i++;
	}

	return (dest);
}
