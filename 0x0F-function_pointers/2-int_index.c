#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: void
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);

	return (-1);
}
