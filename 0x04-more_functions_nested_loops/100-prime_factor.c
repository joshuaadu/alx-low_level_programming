#include <stdio.h>

/**
 *  main - finds and prints the largest prime factor of the number
 *
 *  Return: 0
 *
 */

int main(void)
{
	long pn = 612852475143;
	long i;

	for (i = 2; i < pn; i++)
	{
		if (pn % i == 0)
		{
			pn /= i;
		}
	}

	printf("%ld\n", i);

	return (0);
}
