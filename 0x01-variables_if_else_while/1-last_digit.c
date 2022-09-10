#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Check the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld,

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	printf("Last digit of %d is %ls", n, ld);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is zero\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
