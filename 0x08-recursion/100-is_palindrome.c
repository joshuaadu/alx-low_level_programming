#include <stdio.h>
#include "main.h"
/**
 * isPal - recursive function to check validity of a palindrome
 * @s: String
 * @len: length of the string
 * @i: index to start check
 *
 * Return: 1 if it is a prime and 0 it is not
 *
 */
int isPal(char *s, int len, int i)
{
	/**
	 * printf("length is: %d; string is: %s; index is: %d\n", len, s, i);
	 */
	if (i < len / 2)
	{
		if (s[i] == s[len - i - 1])
		{
			/**
			 * printf("s[%d]: %c == s[%d]: %c\n", i, s[i], len, s[len - i - 1]);
			 */
			return (1 * (isPal(s, len, i + 1)));
		}
		else
			return (0);
	}
	return (1);
}

/**
 * _strlen - find the length of a string
 * @s: string to find its length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s[len] != '\0')
	{
		len++;
		strlen(s[len]);
	}
	return (len);
}


/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not
 *
 */


int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen(s);

	if (*s == '\0')
		return (1);

	/* printf("%d \n", len); */
	/* printf("length is: %d; string is: %s;\n", len, s); */
	return (isPal(s, len, 0));
}
