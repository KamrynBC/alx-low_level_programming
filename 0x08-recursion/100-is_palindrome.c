#include "main.h"

/**
 * is_palindrome - entry point
 * @s: string to be used
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	char *r, *t;

	if (*s != '\0')
	{
		r = &*s;
		is_palindrome(s + 1);
		t = &*s;
		is_palindrome(s - 1);
		if (*r == *t)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}
