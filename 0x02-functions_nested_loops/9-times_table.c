#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int n, m, r;

	n = 0;
	while (n < 10)
	{
		m = 1;
		while (m < 10)
		{
			r = n * m;

			_putchar(',');
			_putchar(' ');
			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			} else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}

			++m;
		}

		_putchar('\n');
		++n;
	}
}
