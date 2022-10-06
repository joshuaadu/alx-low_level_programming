#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: positive number of memory allocations
 *
 * Return: void
 *
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(int) * b);

	if (s)
		return (s);

	exit(98);
}
