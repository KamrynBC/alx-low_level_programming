#include "main.h"

/**
 * wildcmp - entry point
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 || *s2 == '*')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
