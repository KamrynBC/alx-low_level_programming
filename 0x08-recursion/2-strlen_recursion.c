#include "main.h"

/**
 * _strlen_recusrion - entry point
 * @s: string to be used
 *
 * Return: integer of string length
 */
int _strlen_recursion(char *s)
{
	int r;
	
	if (*s != '\0')
	{
		r = (*s / *s) + _strlen_recursion(s + 1);
	}

	return (r);
}
