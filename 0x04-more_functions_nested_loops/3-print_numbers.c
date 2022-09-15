#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks for a digit (0 through 9)
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
