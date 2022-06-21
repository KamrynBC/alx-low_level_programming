#include "main.h"

/**
 * _strspn - entry point
 * @s: first string
 * @accpet: second string
 *
 * Return: pointer to s. null if otherwise
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j;

	len = 0;
	i = 0;
	while (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len = len + 1;
			}
			j++;
		}
		i++;
	}

	return (len);
}
