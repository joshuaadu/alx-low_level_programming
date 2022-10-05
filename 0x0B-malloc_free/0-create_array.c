#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: positive number memory allocations to make
 * @c: character to store in memory
 *
 * Return: pointer to the array/memory allocation or
 * NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size *  sizeof(c));

	if (s)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
	return (NULL);
}
