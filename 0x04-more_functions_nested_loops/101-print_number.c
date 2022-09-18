#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: integer number
 *
 */

void print_number(int n);
{
	unsigned int i;
	int j, k;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	j = i;
	k = 1;

	for (; j / 10 != 0; j /= 10)
	{
		k *= 10;
	}

	for (; k > 0 ; k /= 10)
	{

		_putchar(((i / k) % 10) + '0');
	}

}
