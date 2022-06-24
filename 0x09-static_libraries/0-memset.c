#include "main.h"

/**
 * *_memset - entry pooint
 * @s: first string
 * @b: second string
 * @n: first integer
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
