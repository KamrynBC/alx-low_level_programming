#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: first string
 * @src: second string
 * @n: first integer
 *
 * Retrun: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j, k;

	i = 0;
	k = 50 + n;
	for (j = 50; j < k; j++)
	{
		dest[j] = src[i];
		i++;
	}

	return (dest);
}
