#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: string to be used
 *
 * Return: integer of string length
 */
int _strlen_recursion(char *s)
{
	int r;

	if (*s != '\0')
	{
		r = 1  + _strlen_recursion(s + 1);
	}
	else
	{
		r  = 0;
	}

	return (r);
}
