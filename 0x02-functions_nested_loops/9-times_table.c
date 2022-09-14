#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int n, m;

	n = 0;
	while (n < 10)
	{
		m = 0;

		while (m < 10)
		{
			_putchar((n * m) + '0');
			++m;
		}

		_putchar('\n');
		++n;
	}
}
