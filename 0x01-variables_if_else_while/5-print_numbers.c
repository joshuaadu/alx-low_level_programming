#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print all single digit base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* your code goes there */
	for (n = 0;  n < 10; n++)
		puts(n);
	puts('\n');
	return (0);
}
