#include "main.h"

/**
 * *_strpbrk - entry point
 * @s: first string
 * @accept: second string
 *
 * Retrun: pointer to byte s that matches accept. null if otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	char *point;
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				point = &s[i];
				break;
			}
			else
			{
				j++;
			}
		}
	}
	if (s[i] == '\0')
	{
		point = &s[i];
	}

	return (point);
}
