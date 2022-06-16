#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: First string
 * @src: Second string
 * @n: Integer size in bytes of string length
 *
 * Return: Pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (j >= n)
	{
		k = 0;
		while (k < n)
		{	
			dest[i] = src[k];
			i++;
			k++;
		}
		dest[i] = '\0';
	}
	else if (j < n)
	{
		k = 0;
		while (k < j)
		{

			dest[i] = src[k];
			i++;
			k++;
		}
		dest[i] = '\0';
	}

	return (dest);
}
