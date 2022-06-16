#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: First string
 * @src: Second string
 * @n: Integer(byte szie)
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (j < n)
	{
		while (k < j)
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	else if (j >= n)
	{
		while (k < n)
		{
			dest[k] = src[k];
			k++;
		}
		while (k < j)
		{
			dest[k] = dest[k];
			k++;
		}
	}

	return (dest);
}
