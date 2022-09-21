#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: array to be printed
 * @n: the number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; (j = a[i]) != '\0' && i < n; i++)
	{
		printf("%d", j);
		if (i < (n - 1))
			printf(", ");
	}
	putchar('\n');

}
