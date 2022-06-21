#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: first string
 * @src: second string
 * @n: first integer
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j, k, m;

	for (i = 0; i < 50; i++)
	{
		dest[i] = 0;
	}
	k = i + n;
	m = 0;
	for (j = i; j < k; j++)
	{
		dest[j] = src[m];
		m++;
	}

	return (dest);
}
