#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always 0 (Successful)
 */
char *_strcpy(char *dest, char *src)
{
	int len, i, j;

	len = 0;
	i = 0;
	while (src[i] != '\0')
	{
		len = len + 1;
		i++;
	}
	for (j = 0; j <= len - 1; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
