#include <stdio.h>
#include "main.h"


/**
 * find_sqrt - find square root
 * @p: number to find its square root
 * @f: potential square root
 * Return: root
 *
 */

int find_sqrt(int p, int f)
{
	if (f * f == p)
		return (f);
	if (f * f > p)
		return (-1);
	return (find_sqrt(p, f + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find its square root
 *
 * Return: If n does not have a natural square root
 * the function should return -1
 *
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
