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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
