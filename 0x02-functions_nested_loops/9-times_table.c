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
		m = 0;

		while (m < 10)
		{
			r = n * m;
			if (r == 0)
				_putchar(k + '0');

			if (r < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
			} else if (r > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			++m;
		}

		_putchar('\n');
		++n;
	}
}
