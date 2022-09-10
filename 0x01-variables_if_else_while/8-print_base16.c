#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* your code goes there */
	for (n = 48;  n < 58; n++)
		putchar(n);

	for (n = 97;  n < 103; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
