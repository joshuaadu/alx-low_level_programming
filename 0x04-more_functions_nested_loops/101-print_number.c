#include <main.h>

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: integer number
 *
 */

void print_number(int n);
{
	unsigned int i = n;

	if (i < 0)
	{
		putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	putchar((i % 10) + '0');

}
