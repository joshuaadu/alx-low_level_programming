#include <stdio.h>
#include "main.h"


/**
 * isPrime - check if a number is a prime using recursion
 *
 * @n: number to check for prime
 * @p: factor to start with
 *
 * Return: 1 if it is a prime and 0 it is not
 *
 */

int isPrime(int n, int p)
{
	if (n % p == 0)
	{
		if (n == p)
			return (1);
		else
			return (0);
	}
	return (0 + isPrime(n, p + 1));
}


/**
 * is_prime_number - check for prime number
 * @n: number to check for prime
 *
 * Return: 1 if it is a prime and 0 it is not
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isPrime(n, 2));
}
